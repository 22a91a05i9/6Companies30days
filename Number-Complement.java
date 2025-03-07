class Solution {
    public int findComplement(int num) {
        char[] res = Integer.toString(num,2).toCharArray();
        for (int i = 0; i < res.length; i++)
        {
            if(res[i] == '1')
            {
                res[i] = '0';
            } 
            else
            {
                res[i] = '1';
            }
        }
        return Integer.parseInt(new String(res),2);
    }
}
