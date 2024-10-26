class MagicSpell:
    def __init__(self, number):
        self.number = number

    def sum_of_digits(self, num):
        """
        Returns the sum of the digits of a number.
        """
        total = 0
        while num > 0:
            total += num % 10
            num //= 10
        return total

    def count_spell_casts(self):
        """
        Returns the number of times the spell can be cast on the number until it becomes one-digit.
        """
        # If the number is already one digit, no need to cast any spell
        if self.number < 10:
            return 0

        # Otherwise, keep casting the spell until the number becomes one digit
        count = 0
        while self.number >= 10:
            self.number = self.sum_of_digits(self.number)
            count += 1

        return count


# Read input
n = int(input())

# Create an instance of MagicSpell class
magic_spell = MagicSpell(n)

# Calculate and print the result
print(magic_spell.count_spell_casts())
