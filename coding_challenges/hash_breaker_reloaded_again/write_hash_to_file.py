import os
import hashlib
import itertools
from multiprocessing import Process, cpu_count

POOL = "abcdefghijklmnopqrstuvwxyz0123456789"
WIDTH = 6
BUCKET_DIR = "./buckets"
BATCH_SIZE = 100_000  # écrire après ce nombre de lignes en mémoire
MAX_OPEN = 512         # max fichiers ouverts par process

os.makedirs(BUCKET_DIR, exist_ok=True)

def worker(start_chars):
    import collections
    buckets = collections.defaultdict(list)
    total = 0
    combos = itertools.product(start_chars, POOL, repeat=WIDTH-1)
    for tpl in combos:
        s = ''.join(tpl)
        digest = hashlib.sha1(s.encode('ascii')).hexdigest()
        bucket = digest[:4]
        payload = digest[4:]
        buckets[bucket].append(payload + s + "\n")
        total += 1
        if total % BATCH_SIZE == 0:
            flush_buckets(buckets)
    flush_buckets(buckets)
    print(f"Process {start_chars} done, processed {total} strings")

def flush_buckets(buckets):
    for bucket, lines in buckets.items():
        if lines:
            path = os.path.join(BUCKET_DIR, bucket)
            with open(path, "a") as f:
                f.write("".join(lines))
            buckets[bucket] = []

if __name__ == "__main__":
    ncpu = cpu_count()
    # diviser le premier caractère entre les processus
    splits = [[] for _ in range(ncpu)]
    for i, c in enumerate(POOL):
        splits[i % ncpu].append(c)

    procs = []
    for s in splits:
        p = Process(target=worker, args=(s,))
        p.start()
        procs.append(p)

    for p in procs:
        p.join()

    print("All done")
