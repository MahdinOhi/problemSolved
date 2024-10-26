n = int(input())
bills = [100, 20, 10, 5, 1]
num_bills = 0

for note in bills:
    num_bills += n // note
    n %= note

print(num_bills)