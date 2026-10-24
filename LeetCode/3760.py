class Solution(object):
    def maxDistinct(self, s):
        """
        :type s: str
        :rtype: int
        """

        if not s:
            return 0

        if len(s) == len(set(s)):
            return len(s)

        read = set(s)
        return len(read)
