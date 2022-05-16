class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        queue<vector<int>>q;
        if(grid[0][0] == 1)return -1;
        q.push({0,0,1});
        grid[0][0] = 1;
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>ans = {{1,1},{-1,-1},{1,-1},{0,-1},{0,1},{1,0},{-1,0},{-1,1}};
        while(!q.empty())
        {
            int size = q.size();
            while(size-- > 0)
            {
                vector<int>tmp = q.front();
                q.pop();
                int x = tmp[0];
                int y = tmp[1];
                int pt = tmp[2];
                if(x == m-1 && y == n-1)
                {
                    return pt;
                }
                for(auto c : ans )
                {
                    int a = x + c[0];
                    int b = y + c[1];
                    if(a >=0 && b>=0 && a < m && b < n && grid[a][b] == 0)
                    {
                        q.push({a,b,pt+1});
                        grid[a][b] = 1;
                    }
                }
            }
        }
        return -1;
    }
};