class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int i,j,e,l,cnt;
        l = nums.size();
        int lis[l];
        lis[0] = 1;
        for ( i = 1; i < l; i++ )
        {
            lis[i] = 1;
            for ( j = 0; j < i; j++ )
            {
                if ((nums[i] > nums[j]) && (lis[i] < lis[j] + 1))
                {
                    lis[i] = lis[j] + 1;
                }
            }
        }
        return *max_element(lis,lis+l);
    }
};