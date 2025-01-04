class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> a;
        for(int i=1;i<=n;i++){
            a.push_back(i);
        }
        int ci=0;
        while(a.size()!=1){
            int ni=(ci+k-1)%a.size();
            a.erase(a.begin() + ni);
            ci=ni;
            }
            return a[0];
        }
};