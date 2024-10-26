class Solution:
    def search(self, nums: List[int], target: int) -> int:
        low = 0
        high = len(nums) - 1
        
        while low <= high:
            mid = (low + high) // 2  #! Use integer division
            
            if nums[mid] == target:  
                return mid
            elif nums[mid] < target:  
                low = mid + 1
            else:
                high = mid - 1
        
        return -1  #* Return -1 if target is not found
