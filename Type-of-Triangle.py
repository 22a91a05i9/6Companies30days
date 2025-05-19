from typing import List

class Solution:
    def triangleType(self, nums: List[int]) -> str:
        s = set(nums)
        if (nums[0] + nums[1] > nums[2] and
            nums[1] + nums[2] > nums[0] and
            nums[2] + nums[0] > nums[1]):

            if len(s) == 1:
                return "equilateral"
            elif len(s) == 2:
                return "isosceles"
            else:
                return "scalene"
        else:
            return "none"