import string
n = int(input())
s = str(input())
alphabet = "abcdefghijklmnopqrstuvwxyz"
for char in alphabet:
    if char not in s.lower():
        print("NO")
        break
else:
    print("YES")
