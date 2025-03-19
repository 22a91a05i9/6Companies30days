class Solution {
    public int minOperations(int[] nums) {
        int n = nums.length;
        int operations = 0;
        for (int i = 0; i < n - 2; i++) {
            if (nums[i] == 0) {
                operations++;
                nums[i] = 1;
                nums[i + 1] = 1 - nums[i + 1];
                nums[i + 2] = 1 - nums[i + 2];
            }
        }
        if (nums[n - 2] == 0 || nums[n - 1] == 0) {
            return -1;
        }
        return operations;
    }
}