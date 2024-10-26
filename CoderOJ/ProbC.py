def min_delay(T, test_cases):
    res = []
    for _ in range(T):
        n, machines = test_cases[_]
        machines.sort(key=lambda x: x[0] + x[1])
        low, high = 1, 10**18
        while low < high:
            mid = (low + high) // 2
            if sum(max(0, (mid - m[0]) // m[1]) for m in machines) >= n:
                high = mid
            else:
                low = mid + 1
        res.append(high)
    return res


def take_input():
    T = int(input().strip())
    test_cases = []
    for _ in range(T):
        n = int(input().strip())
        machines = []
        for _ in range(5):
            a, b = map(int, input().strip().split())
            machines.append((a, b))
        test_cases.append((n, machines))
    return T, test_cases


T, test_cases = take_input()
print(min_delay(T, test_cases))
