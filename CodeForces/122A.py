def is_lucky_number(num):
    while num > 0:
        digit = num % 10
        if digit != 4 and digit != 7:
            return False
        num //= 10
    return True

def is_almost_lucky(n):
    for i in range(1, n + 1):
        if is_lucky_number(i) and n % i == 0:
            return "YES"
    return "NO"

n = int(input().strip())
print(is_almost_lucky(n))
