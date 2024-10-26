def smallest_word(n):
    for i in range(1, 26 + 1):
        for j in range(1, 26 + 1):
            k = n - i - j
            if 1 <= k <= 26:
                return chr(i + 96) + chr(j + 96) + chr(k + 96)
    return ""


def main():
    t = int(input().strip())
    results = []
    for _ in range(t):
        n = int(input().strip())
        results.append(smallest_word(n))

    for result in results:
        print(result)


if __name__ == "__main__":
    main()
