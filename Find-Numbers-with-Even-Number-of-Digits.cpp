class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt = 0,nd = 0;
        for (int i = 0; i < nums.size(); i++ )
        {
            nd = log10(nums[i]);        // Because log of a number gives one number less than the number of digits.
            if (nd % 2 != 0)
            {
                cnt++;
            }
        }
        return cnt;
    }
};
