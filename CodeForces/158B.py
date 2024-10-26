def main():
    n = int(input())
    freq = [0] * 4

    inputs = list(map(int, input().split()))

    if len(inputs) != n:
        print()
        return

    for input_val in inputs:
        if 1 <= input_val <= 4:
            freq[input_val - 1] += 1

    cnt = freq[3]
    cnt += freq[2]
    freq[0] = max(0, freq[0] - freq[2])

    cnt += (freq[1] // 2)
    freq[1] -= (freq[1] // 2 * 2)

    if freq[1]:
        cnt += 1
        freq[0] = max(0, freq[0] - 2)

    if freq[0] > 0:
        cnt += (freq[0] // 4)
        freq[0] -= (freq[0] // 4 * 4)
        if freq[0] > 0:
            cnt += 1

    print(cnt)

if __name__ == "__main__":
    main()
