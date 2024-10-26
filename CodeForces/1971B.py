def solve():
    s = input().strip()
    ok = False
    s_list = list(s)
    for i in range(1, len(s_list)):
        if s_list[i] != s_list[0]:
            s_list[i], s_list[0] = s_list[0], s_list[i]
            ok = True
            break
    if not ok:
        print("NO")
        return
    print("YES")
    print(''.join(s_list))

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()
