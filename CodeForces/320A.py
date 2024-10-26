import re  # regex

def is_magic_number(number):
    pattern = re.compile(r'^(1|14|144)+$')
    return bool(pattern.match(number))

number = input().strip()
print("YES" if is_magic_number(number) else "NO")
