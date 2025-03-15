from typing import List  

class Solution:  
    def minCapability(self, nums: List[int], k: int) -> int:  
        def can_rob_with_capability(mid: int) -> bool:  
            count = 0  
            i = 0  
            
            while i < len(nums):  
                if nums[i] <= mid:  
                    count += 1  
                    i += 1  
                i += 1  
                
                if count >= k:  
                    return True  
            
            return count >= k  

        left, right = min(nums), max(nums)  

        while left < right:  
            mid = (left + right) // 2  
            if can_rob_with_capability(mid):  
                right = mid  
            else:  
                left = mid + 1  
        
        return left  