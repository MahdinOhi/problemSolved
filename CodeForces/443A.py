input_line = input().strip()

# Check if the set is empty or not well-formed
if len(input_line) <= 2 or input_line[0] != '{' or input_line[-1] != '}':
    print(0)
else:
    # Extract letters between curly brackets
    letters = input_line[1:-1].split(", ")

    distinct_letters = set(letters)

    print(len(distinct_letters))