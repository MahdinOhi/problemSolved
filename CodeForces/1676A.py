n = int(input())
for i in range(n):
    m = input()
    li = list(map(int, m))
    if sum(li[:3]) == sum(li[3:]):
        print("YES")
    else:
        print("NO")
