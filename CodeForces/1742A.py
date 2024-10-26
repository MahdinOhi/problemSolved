t = int(input())

for _ in range(t):
    a = int(input())
    b = int(input())
    c = int(input())

    if a + b == c or b + c == a or a + c == b:
        print("YES")
    else:
        print("NO")
