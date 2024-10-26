import math

def is_square(x):
    y = int(math.sqrt(x))
    return y * y == x


def main():
    for _ in range(int(input())):
        n = int(input())
        if n % 2 == 0 and is_square(n // 2):
            print("YES")
        elif n % 4 == 0 and is_square(n // 4):
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    main()
