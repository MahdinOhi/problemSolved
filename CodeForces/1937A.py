import math


def binpow(a, b):
    res = 1
    while b > 0:
        if b & 1:
            res *= a
        a *= a
        b >>= 1
    return res


t = int(input())
for _ in range(t):
    n = int(input())
    p = int(math.log2(n))
    print(binpow(2, p))
