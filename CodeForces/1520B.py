def isRepDigit(n):
    strN = str(n)
    firstEle = strN[0]
    for element in strN:
        if element != firstEle:
            return False
    return True


t = int(input())

for _ in range(t):
    count = 0
    n = int(input())
    for i in range(1, n + 1):
        if isRepDigit(i):
            count += 1
    print(count)
