class Solution:
    def longestPalindrome(self, s: str) -> str:
        n = len(s)
        if n < 2:
            return s

        dp = [[False] * n for _ in range(n)]
        start = 0
        max_len = 1

        for i in range(n):
            dp[i][i] = True

        for end in range(1, n):
            for begin in range(end):
                if s[begin] == s[end]:
                    if end - begin <= 2:
                        dp[begin][end] = True
                    else:
                        dp[begin][end] = dp[begin+1][end-1]

                    if dp[begin][end] and (end - begin + 1) > max_len:
                        start = begin
                        max_len = end - begin + 1

        return s[start:start + max_len]
