t = int(input())

for _ in range(t):
    n = int(input())
    s = input().strip()

    traversed_prob = set()
    res = 0

    for problem in s:
        if problem not in traversed_prob:
            res += 2
            traversed_prob.add(problem)
        else:
            res += 1

    print(res)
