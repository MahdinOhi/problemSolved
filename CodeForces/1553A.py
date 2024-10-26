"""
def digitSum(x):
    sumVal = 0
    strX = str(x)
    for element in strX:
        sumVal += int(element)
    return sumVal
"""
"""
def isinteresting(x: int) -> bool:
    sumX = digitSum(x)
    y = x + 1
    sumY = digitSum(y)
    return sumY < sumX
"""

t = int(input())

for _ in range(t):
    x = int(input())
    print(int((x + 1)/10))
