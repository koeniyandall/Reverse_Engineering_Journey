import struct

def glibc_rand(seed):
    r = [0] * 344
    r[0] = seed if seed != 0 else 1
    for i in range(1, 31):
        r[i] = (16807 * r[i - 1]) % 2147483647
    for i in range(31, 34):
        r[i] = r[i - 31]
    for i in range(34, 344):
        r[i] = (r[i - 31] + r[i - 3]) & 0xFFFFFFFF
    while True:
        nxt = (r[-31] + r[-3]) & 0xFFFFFFFF
        r.append(nxt)
        r.pop(0)
        yield nxt >> 1

data = open("flag.enc", "rb").read()
seed = struct.unpack("<I", data[:4])[0]
enc = data[4:]

rng = glibc_rand(seed)
out = bytearray()
for b in enc:
    x = next(rng) & 0xFF
    rot = next(rng) & 7
    b = ((b >> rot) | (b << (8 - rot))) & 0xFF
    out.append(b ^ x)

print(out.decode(errors="replace"))
