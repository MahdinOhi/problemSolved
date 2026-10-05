class Solution(object):
    def getHappyString(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: str
        """
        def findHappy(lenght):
            happy = []

            def gen(current, remaining):
                if len(current) == lenght:
                    happy.append(current)
                    return

                for i in range(len(remaining)):
                    gen(current + remaining[i],
                        remaining[:i] + remaining[i+1:])

            gen("", "abc")
            return happy
        return sorted(findHappy(n))[k-1] if k <= len(findHappy(n)) else ""
