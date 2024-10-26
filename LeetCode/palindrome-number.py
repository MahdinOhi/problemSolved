class Solution:
    def isPalindrome(self, x: int) -> bool:
        numStr = str(x)
        revStr = numStr[::-1]
        return revStr == numStr