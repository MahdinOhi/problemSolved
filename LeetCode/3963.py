class Solution(object):
    def createGrid(self, m, n):
        arr = ["#" * n for _ in range(m)]

        arr[0] = "." * n

        for i in range(m):
            arr[i] = arr[i][:-1] + "."

        return arr
