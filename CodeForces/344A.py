m = int(input())
c = 1
prev = int(input())
for i in range(1, m):
    s = int(input())
    if prev != s:
        prev = s
        c += 1

print(c)
