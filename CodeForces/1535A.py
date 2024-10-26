t = int(input())

for _ in range(t):
    a = list(map(int, input().split()))

    first_max = -float("inf")
    second_max = -float("inf")

    for i in range(len(a)):
        if a[i] > first_max:
            second_max = first_max
            first_max = a[i]

    i = max(a[0], a[1])
    j = max(a[2], a[3])

    if i == first_max or i == second_max:
        if j == first_max or j == second_max:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")
