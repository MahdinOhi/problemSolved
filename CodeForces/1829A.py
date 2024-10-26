t = int(input())

for _ in range(t):
    s = input().strip()
    m = "codeforces"
    count = 0
    for i in range(len(s)):
        if s[i] != m[i]:
            count += 1

    print(count)
