for _ in range(int(input())):
    one = list(input())
    two = list(input())
    three = list(input())
    normal = {'A', 'B', 'C'}
    if set(one) != normal:
        normal.add('?')
        print(list(normal.difference(set(one)))[0])
    elif set(two) != normal:
        normal.add('?')
        print(list(normal.difference(set(two)))[0])
    else:
        normal.add('?')
        print(list(normal.difference(set(three)))[0])
