n, k = map(int, input().split())

y = list(map(int, input().split()))

memberCount = 0
for i in range(n):
    if y[i] + k <= 5:
        memberCount += 1

print(memberCount // 3)
