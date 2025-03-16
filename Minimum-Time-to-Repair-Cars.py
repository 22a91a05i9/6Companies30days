class Solution:  
    def repairCars(self, ranks: List[int], cars: int) -> int:  
        def canRepairInTime(T):  
            total_cars_repaired = 0  
            for r in ranks:  
                n = int((T / r) ** 0.5)  
                total_cars_repaired += n  
                if total_cars_repaired >= cars:  
                    return True  
            return total_cars_repaired >= cars  

        left, right = 1, max(ranks) * (cars ** 2)  
        
        while left < right:  
            mid = (left + right) // 2  
            if canRepairInTime(mid):  
                right = mid  
            else:  
                left = mid + 1  

        return left  