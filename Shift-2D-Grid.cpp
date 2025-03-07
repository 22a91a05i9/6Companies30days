class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int r = grid.size();
        int c = grid[0].size();
        int i,j;
        vector<vector<int>> res(r);
        if(r == 1 && c == 1)
        {
            return grid;
        }
        while(k--)
        {
            for ( i = 0; i < r; i++ )
            {
                res[i] = vector<int>(c);
                for ( j = 0; j < c ; j++ )
                {
                    
                    if(i == 0 && j == 0)
                    {
                        res[i][j] = grid[r-1][c-1];
                    }
                    else if(j == 0)
                    {
                        res[i][j] = grid[i-1][c-1];
                        cout << grid[i-1][c-1];
                    }
                    else
                    {
                        res[i][j] = grid[i][j-1];
                    }
                }
            }
            grid = res;
        }
        return res;
    }
};