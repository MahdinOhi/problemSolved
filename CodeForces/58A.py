word = input()
hello = "hello"
j = 0
pas = 0

for char in word:
    if char == hello[j]:
        j += 1
        pas += 1
        if pas == 5:
            break

if pas == 5:
    print("YES")
else:
    print("NO")
