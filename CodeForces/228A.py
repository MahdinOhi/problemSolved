def main():
    horseshoes = list(map(int, input().split()))

    distinct_colors = len(set(horseshoes))

    additional_horseshoes = 4 - distinct_colors

    print(additional_horseshoes)


if __name__ == "__main__":
    main()
