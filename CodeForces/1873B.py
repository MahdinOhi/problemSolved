t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    a.sort()

    ans = 1
    a[0]+=1
    for i in range(n):
        ans *= a[i]
    
    print(ans)
