// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i;
        for(i=n;i>=1;i--){
            if(!isBadVersion(i))
            {
                return i+1;
            }
        }
        return 1;
    }
};