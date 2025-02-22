class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>p;
         for ( int i = 0; i < numRows; i++ )
        {
            vector<int> r(i+1);
            r = {};
            for (int j = 0; j <= i; j++ )
            {
                if(j == 0 || j == i )
                {
                    r.push_back(1);
                }
                else
                {
                    r.push_back(p[i-1][j-1] + p[i-1][j]);
                }
            }
            p.push_back(r);
        }
        return p;
    }
};