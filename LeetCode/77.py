
class Solution(object):
    def combine(self, n, k):
        result = []
        current = []

        def backtrack(start):
            # Base case: combination is complete
            if len(current) == k:
                result.append(current[:])
                return

            # Try every available number
            for i in range(start, n + 1):
                current.append(i)

                backtrack(i + 1)

                # Undo the last choice
                current.pop()

        backtrack(1)
        return result
