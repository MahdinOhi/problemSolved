class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        visited = {}
        for idx, n in enumerate(nums):
            if (target - n) in visited.keys():
                return [idx, visited[target - n]]
            visited[n] = idx
