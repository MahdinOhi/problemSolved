for i in range(int(input().rstrip())):
    n=int(input())
    print(*reversed([input().index("#")+1 for i in range(n)]))