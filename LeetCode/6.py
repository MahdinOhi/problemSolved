class Solution(object):
    def convert(self, s, numRows):
        if numRows == 1 or numRows >= len(s):
            return s

        row = [""] * numRows
        curr_row = 0
        direction = -1

        for char in s:
            row[curr_row] += char

            if curr_row == 0 or curr_row == numRows - 1:
                direction *= -1

            curr_row += direction

        return "".join(row)
