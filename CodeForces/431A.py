a = list(map(int, input().split()))
s = input()
sum = 0
for char in s:
    sum += a[int(char) - 1]
print(sum)
