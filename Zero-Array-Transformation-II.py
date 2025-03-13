from typing import List  

class Solution:  
    def minZeroArray(self, nums: List[int], queries: List[List[int]]) -> int:  
        
        def can_make_zero(k: int) -> bool:  
            # Create a copy of nums to track left decrements  
            remaining = nums[:]  
            # Using a list to track the total possible decrement at each index  
            decrements = [0] * (len(nums) + 1)  # +1 for easier range handling  
            
            # Apply decrements according to the expected first k queries  
            for i in range(k):  
                l, r, val = queries[i]  
                decrements[l] += val  
                if r + 1 < len(decrements):  
                    decrements[r + 1] -= val  
            
            # Calculate the effective decrements with prefix sum  
            current_decrement = 0  
            for i in range(len(nums)):  
                current_decrement += decrements[i]  
                # Decrease the remaining value by the effective decrement  
                remaining[i] -= current_decrement  
                # If we expect a negative value, we cannot make it zero  
                if remaining[i] > 0:  
                    return False  
            
            # If all values can be reduced to zero  
            return True  

        left, right = 0, len(queries)  
        result = -1  

        while left <= right:  
            mid = (left + right) // 2  
            if can_make_zero(mid):  
                result = mid  # A valid k found  
                right = mid - 1  # Try for a smaller k  
            else:  
                left = mid + 1  # Increase k  

        return result  


