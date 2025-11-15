from pathlib import Path
import re, urllib.parse, itertools, os, sys

log = Path("access.log")
out = Path("sql_requests.txt")

if not log.exists():
    print("Log file not found:", log)
else:
    req_re = re.compile(r'"\w+\s+([^"]+)\s+HTTP/[\d.]+"')
    time_re = re.compile(r'\[([^\]]+)\]')
    count = 0
    with log.open("r", encoding="utf-8", errors="replace") as f, out.open("w", encoding="utf-8") as o:
        o.write("line_no\ttimestamp\tdecoded_request\n")
        for ln, line in enumerate(f, 1):
            mreq = req_re.search(line)
            if not mreq:
                continue
            path = mreq.group(1)
            decoded = urllib.parse.unquote_plus(path)
            # Only keep backend.php requests (likely contain SQLi payloads) or lines mentioning SQL keywords
            if "backend.php" in decoded.lower() or any(k in decoded.lower() for k in ("substring","group_concat","conv(","hex(","sleep","concat","chart_db","flag")):
                mt = time_re.search(line)
                ts = mt.group(1) if mt else ""
                # sanitize newlines/tabs
                dec_clean = decoded.replace("\t", " ").replace("\n", " ")
                o.write(f"{ln}\t{ts}\t{dec_clean}\n")
                count += 1
    print(f"Wrote {count} extracted requests to {out}")
