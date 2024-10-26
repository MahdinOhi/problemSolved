import sys


def min_operations_to_k_Bs(test_cases):
    # Create a list to store results for all test cases
    results = []

    # Loop through each test case
    for case in test_cases:
        n, k, s = case  # Unpack the test case values
        # Count the number of 'B's in the current string
        current_b_count = s.count('B')

        # If the current count of 'B's is already equal to k, no operations are needed
        if current_b_count == k:
            # Append (0, []) indicating 0 operations needed
            results.append((0, []))
            continue  # Move to the next test case

        operations = []  # List to store the operations for the current test case

        if current_b_count > k:
            # If there are more 'B's than needed, we need to convert some 'B's to 'A's
            # Calculate how many 'B's need to be converted to 'A's
            needed_a_count = current_b_count - k
            count = 0  # Counter to keep track of how many 'B's we have found so far
            for i in range(n):
                if s[i] == 'B':  # If the current character is 'B'
                    count += 1  # Increment the count of 'B's found
                if count == needed_a_count:  # If we have found enough 'B's to convert
                    # Record the operation to convert the first (i + 1) characters to 'A'
                    operations.append((i + 1, 'A'))
                    break  # Exit the loop since we have the required operation
        else:
            # If there are fewer 'B's than needed, we need to convert some 'A's to 'B's
            # Calculate how many 'A's need to be converted to 'B's
            needed_b_count = k - current_b_count
            count = 0  # Counter to keep track of how many 'A's we have found so far
            for i in range(n):
                if s[i] == 'A':  # If the current character is 'A'
                    count += 1  # Increment the count of 'A's found
                if count == needed_b_count:  # If we have found enough 'A's to convert
                    # Record the operation to convert the first (i + 1) characters to 'B'
                    operations.append((i + 1, 'B'))
                    break  # Exit the loop since we have the required operation

        # Append the number of operations and the operations themselves to the results
        results.append((len(operations), operations))

    return results  # Return the results for all test cases


# Reading input
input = sys.stdin.read  # Read all input from standard input
data = input().split()  # Split the input data into individual tokens

t = int(data[0])  # The first token is the number of test cases
index = 1  # Initialize the index for reading the rest of the data
test_cases = []  # List to store all test cases

for _ in range(t):
    n = int(data[index])  # Read the length of the string
    k = int(data[index + 1])  # Read the desired number of 'B's
    s = data[index + 2]  # Read the string itself
    test_cases.append((n, k, s))  # Append the test case to the list
    index += 3  # Move the index to the next test case

# Processing the test cases
# Get the results for all test cases
results = min_operations_to_k_Bs(test_cases)

# Output the results
output = []
for res in results:
    m, operations = res  # Unpack the result
    output.append(str(m))  # Append the number of operations to the output
    for op in operations:
        # Append each operation to the output
        output.append(f"{op[0]} {op[1]}")

# Write the output to standard output
sys.stdout.write("\n".join(output) + "\n")
