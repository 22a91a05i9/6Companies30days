class Solution {
public:
    bool isHappy(int n) {
        int ld,sq,s,t;
        t=n;
        while(n>9){
            s=0;
            while(t>0){
                ld=t%10;
                sq=ld*ld;
                s+=sq;
                t/=10;
            }
            t=s;
            n=s;
        }
        return(n==1 || n==7);
    }
};