def create_special_string(n):
    if n == 1:
        return "A"
    elif n == 2:
        return "NO"
    else:
        result = "AAB"
        special_count = 2
        for i in range(3, n + 1):
            if i % 2 == 0:
                result += 'B'
            else:
                result += 'A'
            if i % 3 == 0:
                special_count += 1
        if special_count == n:
            return "YES\n" + result
        else:
            return "NO"


t = int(input())
for _ in range(t):
    n = int(input())
    print(create_special_string(n))
