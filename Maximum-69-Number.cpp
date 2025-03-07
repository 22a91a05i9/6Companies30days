class Solution {
public:
    int maximum69Number (int num) {
        int cnt = 1;
        int a = reverse(num);
        int b = 0;
        int rem = 0;
        while(a > 0)
        {
            rem = a % 10;
            if(rem == 6 && cnt == 1)
            {
                b = (b*10) + 9;
                cnt--;
            }
            else
            {
                b = (b*10) + rem;
            }
            a /= 10;
        }
        return b;
    }

    int reverse(int n)
    {
        int rev = 0;
        while(n > 0) 
        {
            int rem = (n % 10);
            rev = (rev*10) + rem;
            n /= 10;
        }
        return rev;
    }
};