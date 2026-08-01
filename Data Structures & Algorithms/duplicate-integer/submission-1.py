class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        temp = {}
        for i in range(len(nums)):
            if nums[i] in temp:
                return True
            temp[nums[i]] = 1
        
        
        
        return False
