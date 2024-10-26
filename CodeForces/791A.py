from math import ceil, log

LIMAK_GROWTH_RATE = 3
BOB_GROWTH_RATE = 2

def main():
    # Input Limak's and Bob's weights
    a, b = list(map(int, input().split()))

    # Check if Limak's weight is already equal to Bob's
    if a == b: 
        return 1  # Limak becomes heavier in the first year

    # Calculate the number of years using logarithmic growth
    years = ceil((log(b) - log(a)) / (log(1 + LIMAK_GROWTH_RATE) - log(1 + BOB_GROWTH_RATE)))

    return years

# Testing the main function
result = main()
print(result)
