class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n));
        int c=1;
        int r = 0, l = 0;
        int le = n-1,re = n-1;
        int ch = 0;
        while(c<=(n*n))
        {
            if(ch == 0)
            {
                for(int i=r;i<=re;i++)
                {
                    ans[l][i] = c;
                    c++;
                }
                l++;
                ch = 1;
            }
            if(ch  == 1)
            {
                for(int i=l;i<=le;i++)
                {
                    ans[i][re] = c;
                    c++;
                }
                re--;
                ch = 2;
            }
            if( ch == 2)
            {
                for(int i=re;i>=r;i--)
                {
                    ans[le][i] = c;
                    c++;
                }
                le--;
                ch = 3;
            }
            if(ch == 3)
            {
                for(int i=le;i>=l;i--)
                {
                    ans[i][r] = c;
                    c++;
                }
                r++;
                ch = 0;
            }
        }
              return ans;
    }
};