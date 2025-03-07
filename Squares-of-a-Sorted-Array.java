class Solution {
    public int[] sortedSquares(int[] nums) {
        int l = nums.length;
        int[] res = new int[l];
        for (int i = 0; i < l; i++)
        {
            res[i] = (int)Math.pow(nums[i],2);
        }
        Arrays.sort(res);
        return res;
    }
}