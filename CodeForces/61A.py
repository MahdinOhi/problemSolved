def main():
    a = input()
    b = input()

    if len(a) != len(b):
        return 1

    result = ''
    for i in range(len(a)):
        result += '1' if a[i] != b[i] else '0'

    print(result)


if __name__ == '__main__':
    main()
