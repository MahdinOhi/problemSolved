n = int(input())
x_sum = y_sum = z_sum = 0

for _ in range(n):
    x, y, z = map(int, input().split())
    x_sum += x
    y_sum += y
    z_sum += z

print("YES" if x_sum == y_sum == z_sum == 0 else "NO")
