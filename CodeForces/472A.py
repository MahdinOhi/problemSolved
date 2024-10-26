def is_composite(num):
    if num <= 3:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return True
    return False


def find_composite_pair(n):
    for i in range(n - 1, n // 2, -1):
        if is_composite(i) and is_composite(n - i):
            return i, n - i


n = int(input().strip())

x, y = find_composite_pair(n)

print(x, y)
