def has_duplicates(sequence):
    seen = set()
    for number in sequence:
        if number in seen:
            return True
        seen.add(number)
    return False

def minimum_prefix_removal(n, sequence):
    seen = set()
    for i in range(n - 1, -1, -1):
        if sequence[i] in seen:
            return i + 1
        seen.add(sequence[i])
    return 0

def solve():
    t = int(input())
    results = []
    for _ in range(t):
        n = int(input())
        sequence = list(map(int, input().split()))
        result = minimum_prefix_removal(n, sequence)
        results.append(result)
    print("\n".join(map(str, results)))


solve()
