class Solution {
    public int[] diStringMatch(String s) {
        int l = s.length();
        int[] res = new int[l+1];
        int low = 0, high = l;
        for (int i = 0; i < l; i++)
        {
            res[i] = s.charAt(i) == 'I' ? low++ : high--;
        }
        res[l] = low;
        return res;
    }
}