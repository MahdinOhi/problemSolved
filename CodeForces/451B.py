def main():
    n = int(input())
    a = list(map(int, input().split()))
    b = a.copy()
    
    mp = {}
    b.sort()
    for i in range(n):
        mp[b[i]] = i
        
    for i in range(n):
        a[i] = mp[a[i]]
        
    L = -1
    for i in range(n):
        if a[i] != i:
            L = i
            break
            
    R = -1
    for i in range(n - 1, -1, -1):
        if a[i] != i:
            R = i
            break
            
    if L == -1 or R == -1:
        print("yes")
        print(1, 1)
    else:
        a[L:R + 1] = reversed(a[L:R + 1])
        ok = True
        for i in range(n):
            if a[i] != i:
                ok = False
                
        if ok:
            print("yes")
            print(L + 1, R + 1)
        else:
            print("no")

if __name__ == "__main__":
    main()
