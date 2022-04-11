class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int>ans;
        if(k>grid.size()*grid[0].size())
        {
            k = k%(grid.size()*grid[0].size());
        }
        cout<<k<<endl;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
                ans.push_back(grid[i][j]);
        }
        reverse(ans.rbegin(),ans.rbegin()+k);
        reverse(ans.rbegin()+k,ans.rend());
        reverse(ans.rbegin(),ans.rend());
        int c = 0;
        // for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                grid[i][j] = ans[c];
                c++;
            }
        }
        return grid;
    }
};