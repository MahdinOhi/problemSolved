a, b = map(int, input().split())

max_different_socks_days = min(a, b)

remaining_red_socks = a - max_different_socks_days
remaining_blue_socks = b - max_different_socks_days

max_same_socks_days = (remaining_red_socks + remaining_blue_socks) // 2

print(max_different_socks_days, max_same_socks_days)
