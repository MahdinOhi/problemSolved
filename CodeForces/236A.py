def remove_duplicates(string):
    return "".join(sorted(set(string)))


s = input()
w = remove_duplicates(s)
n = len(w)

if n % 2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
