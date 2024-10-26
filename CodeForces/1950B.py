t = int(input())

while t > 0:
    n = int(input())

    matrix = [["." for _ in range(2 * n)] for _ in range(2 * n)]

    cnt = 0
    i = 0
    while i < len(matrix):
        cnt += 1
        if cnt == 1 or cnt == 2:
            k = 0
        elif cnt == 3 or cnt == 4:
            k = 2
        elif cnt > 4:
            cnt = 1
            k = 0
        new_cnt = 0
        while k < len(matrix):
            new_cnt += 1
            if new_cnt == 1 or new_cnt == 2:
                matrix[i][k] = '#'
            elif new_cnt > 2:
                new_cnt = -1
            k += 1
        i += 1

    for row in matrix:
        for k in row:
            print(k, end='')
        print()

    t -= 1
