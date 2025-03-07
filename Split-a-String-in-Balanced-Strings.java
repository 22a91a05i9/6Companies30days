class Solution {
    public int balancedStringSplit(String s) {
        char[] c = s.toCharArray();
        int balance = 0,result = 0;
        for (char brack : c)
        {
            if(brack == 'R')    balance++;
            else    balance--;
            if(balance == 0)    result++;
        }
        return result;
    }
}