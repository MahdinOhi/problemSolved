n = int(input())  
t = list(map(int, input().split()))  
programmers = []
mathematicians = []
sportsmen = []

for i in range(n):
    if t[i] == 1:
        programmers.append(i + 1)
    elif t[i] == 2:
        mathematicians.append(i + 1)
    elif t[i] == 3:
        sportsmen.append(i + 1)

teams_count = min(len(programmers), len(mathematicians), len(sportsmen))

print(teams_count)

for i in range(teams_count):
    print(programmers[i], mathematicians[i], sportsmen[i])
