class Solution {
    public int minimumOperations(int[] nums) {
        HashMap<Integer,Integer> mp = new HashMap<>();
        for(int ele : nums)  mp.put(ele, mp.getOrDefault(ele,0)+1);
        int result=0,i,j;
        for(i=0;i<nums.length-3;i+=3)
        {
            if(mp.size()==nums.length-i)  return result;
            for(j=i;j<i+3;j++){
                if(mp.get(nums[j])==1){
                    mp.remove(nums[j]);
                    continue;
                }
                mp.put(nums[j], mp.getOrDefault(nums[j],0)-1);
            }
            result++;
        }
        return mp.size()==nums.length-i ? result : result+1;
    }
}
