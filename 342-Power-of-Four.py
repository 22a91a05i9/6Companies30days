class Solution:  
    def isPowerOfFour(self, n: int) -> bool:  
        # Check if n is positive  
        if n <= 0:  
            return False  
        # Check if n is a power of 4 using bit manipulation  
        return (n & (n - 1)) == 0 and (n - 1) % 3 == 0  

