# Vérifie "//sh" encoding
val1 = 0x66712d2d
result1 = (val1 + 0x02020202) & 0xffffffff
print(f"0x{result1:08x} == 0x68732f2f ? {result1 == 0x68732f2f}")

# Vérifie qu'il n'y a pas de bad bytes
bad = b"\x0a\x0d\x2f\x2e\x62\x48\x98\x99\x30\x31"
for val in [0x66712d2d, 0x02020202, 0x6e6961ff, 48]:
    check = bytes.fromhex(f'{val:08x}')
    has_bad = any(bytes([b]) in bad for b in check)
    print(f"0x{val:08x}: {'❌ BAD' if has_bad else '✓ OK'}")