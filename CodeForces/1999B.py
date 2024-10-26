def check(a, b):
    if a > b: return 1
    if a == b: return 0
    return -1

for _ in range(int(input())):
    a, b, c, d = map(int, input().split())
    ans = 0

    if check(a, c) + check(b, d) > 0:
        ans += 1
    if check(a, d) + check(b, c) > 0:
        ans += 1
    if check(b, c) + check(a, d) > 0:
        ans += 1
    if check(b, d) + check(a, c) > 0:
        ans += 1

    print(ans)
