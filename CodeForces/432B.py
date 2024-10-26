def calculate_kit_usage(n, teams):
    from collections import defaultdict

    home_count = defaultdict(int)
    x = [team[0] for team in teams]
    y = [team[1] for team in teams]

    for i in range(n):
        home_count[x[i]] += 1

    ans_home = [0] * n
    ans_away = [0] * n

    for i in range(n):
        ans_home[i] = n - 1 + home_count[y[i]]
        ans_away[i] = 2 * (n - 1) - ans_home[i]

    return ans_home, ans_away

n = int(input())
teams = [tuple(map(int, input().split())) for _ in range(n)]

ans_home, ans_away = calculate_kit_usage(n, teams)
for i in range(n):
    print(ans_home[i], ans_away[i])
