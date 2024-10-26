t = int(input())

for i in range(t):
    s = input()

    l = len(s)
    newL = l // 2

    if s[:newL] == s[newL:]:
        print("YES")
    else:
        print("NO")
