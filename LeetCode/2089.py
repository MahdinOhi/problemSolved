class Solution(object):
    def targetIndices(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """

        nums.sort()

        r = []

        lo, hi = 0, len(nums) - 1

        while lo <= hi:
            mid = (lo + hi) // 2

            if nums[mid] < target:
                lo = mid + 1
            elif nums[mid] > target:
                hi = mid - 1
            else:
                left = mid

                while left >= 0 and nums[left] == target:
                    left -= 1
                while left < len(nums) and nums[left] == target:
                    r.append(left)
                    left += 1
            return r
        return r
