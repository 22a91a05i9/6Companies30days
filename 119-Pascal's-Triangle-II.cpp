class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> p;
        vector<int> res;
        for ( int i = 0; i <= rowIndex; i++ )
        {
            res = {};
            for (int j = 0; j <= i; j++ )
            {
                if(j == 0 || j == i )
                {
                    res.push_back(1);
                }
                else
                {
                    res.push_back(p[i-1][j-1] + p[i-1][j]);
                }
            }
            p.push_back(res);
        }
        return res;
    }
};