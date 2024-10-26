t = int(input().strip())
results = []

for _ in range(t):
    n = int(input().strip())
    a = list(map(int, input().strip().split()))

    cnt = 0
    ans = 0
    for i in range(n):
        if a[i] == 0:
            cnt += 1
        else:
            ans = max(ans, cnt)
            cnt = 0

    results.append(max(ans, cnt))

for result in results:
    print(result)

