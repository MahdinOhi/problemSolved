def find_lucky_number(s):
    lucky_count = {'4': 0, '7': 0}
    
    for ch in s:
        if ch in lucky_count:
            lucky_count[ch] += 1

    if lucky_count['4'] == 0 and lucky_count['7'] == 0:
        return '-1'
    elif lucky_count['4'] >= lucky_count['7']:
        return '4'
    else:
        return '7'

s = input()
print(find_lucky_number(s))
