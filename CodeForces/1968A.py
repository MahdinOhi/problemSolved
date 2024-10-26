def gcd(a, b):
    while b:
        a, b = b, a % b
    return a


t = int(input())

for _ in range(t):
    x = int(input())
    maxSum = 0
    Y = 1

    for i in range(1, x):
        currentGCD = gcd(x, i)
        currentSum = currentGCD + i

        if currentSum > maxSum:
            max_sum = currentSum
            Y = i

    print(Y)
