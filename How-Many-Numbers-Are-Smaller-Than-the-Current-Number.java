class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int[] res = new int[nums.length];
        int[] arr = Arrays.copyOf(nums, nums.length);
        Arrays.sort(arr);
        for (int i = 0; i < nums.length; i++ )
        {
            res[i] = linearSearch(arr,nums[i]);
        }
        return res;
    }
    int linearSearch(int[] arr,int key)
    {
        for (int i = 0; i < arr.length; i++ )
        {
            if(arr[i] == key)
            {
                return i;
            }
        }
        return -1;
    }
}