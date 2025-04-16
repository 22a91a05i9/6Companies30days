class Solution:
    def countGood(self, nums: List[int], k: int) -> int:
        i,j,l,result,pairs = 0,0,len(nums),0,0
        mp={}
        for j in range(l):
            if nums[j] in mp:
                pairs+=mp[nums[j]]
                mp[nums[j]]+=1
            else:
                mp[nums[j]]=1
            while pairs >= k :
                result += (l-j)
                mp[nums[i]]-=1
                pairs-=mp[nums[i]]
                i+=1
            j+=1
        return result