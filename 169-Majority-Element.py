class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        candidate = None  
        count = 0  
        
        # First pass to find a candidate  
        for num in nums:  
            if count == 0:  
                candidate = num  
            count += (1 if num == candidate else -1)  
        
        # Second pass can be used to verify the candidate  
        # This step is optional given the problem guarantees a majority element  
        # count = sum(1 for num in nums if num == candidate)  
        # if count > len(nums) // 2:  
        #     return candidate  
        
        return candidate  