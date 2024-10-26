def solve_single(best, other1, other2):
    return max(0, max(other1, other2) + 1 - best)

def main():
    t = int(input())

    for _ in range(t):
        a, b, c = map(int, input().split())

        print(solve_single(a, b, c), solve_single(b, a, c), solve_single(c, a, b))

if __name__ == "__main__":
    main()
