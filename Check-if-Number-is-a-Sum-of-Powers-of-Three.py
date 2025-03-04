class Solution:
    def checkPowersOfThree(self, n: int) -> bool:
        powers_of_three = []  
        power = 1  # Start with 3^0 which is 1  
        while power <= n:  
            powers_of_three.append(power)  
            power *= 3  # Move to the next power of three  

        # Now we will try all combinations of these powers to sum to n  
        def canSum(index, current_sum):  
            if current_sum == n:  
                return True  
            if current_sum > n or index >= len(powers_of_three):  
                return False  
            
            # Include the current power of three  
            if canSum(index + 1, current_sum + powers_of_three[index]):  
                return True  
            
            # Exclude the current power of three  
            return canSum(index + 1, current_sum)  

        return canSum(0, 0)  
