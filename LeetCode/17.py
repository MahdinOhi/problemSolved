class Solution:
    def letterCombinations(self, digits: str) -> list[str]:
        if not digits:
            return []

        phone = {
            "2": "abc",
            "3": "def",
            "4": "ghi",
            "5": "jkl",
            "6": "mno",
            "7": "pqrs",
            "8": "tuv",
            "9": "wxyz"
        }

        result = []

        def backtrack(i, path):
            # Base case: all digits processed
            if i == len(digits):
                result.append("".join(path))
                return

            # Try every letter for the current digit
            for letter in phone[digits[i]]:
                path.append(letter)       # Choose
                backtrack(i + 1, path)    # Explore
                path.pop()                # Undo

        backtrack(0, [])
        return result
