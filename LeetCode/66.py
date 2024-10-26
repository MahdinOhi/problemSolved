class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        digits_int = int("".join(map(str, digits)))
        digits_int += 1
        return [int(digit) for digit in str(digits_int)]
