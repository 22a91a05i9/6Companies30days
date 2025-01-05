class Solution {
public:
    int minMoves2(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        int median=nums[(nums.size()/2)];
        int cnt=0;
        for(int num:nums){
           cnt +=abs(num-median);
        }
        return cnt;
    }
};