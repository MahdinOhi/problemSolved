def solve(x, y, n):
    if n - n % x + y <= n:
        return n - n % x + y
    else:
        return n - n % x - (x - y)

t = int(input())

for _ in range(t):
    x, y, n = map(int, input().split())
    print(solve(x, y, n))