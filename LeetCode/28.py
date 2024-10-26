class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if haystack == needle:
            return 0
        
        len_needle, len_haystack = len(needle), len(haystack)
        hay = haystack[0:len_needle]
        
        for i in range(len_needle, len_haystack + 1):
            if hay == needle:
                return i - len_needle
            if i < len_haystack: hay = hay[1:] + haystack[i]
        
        return -1