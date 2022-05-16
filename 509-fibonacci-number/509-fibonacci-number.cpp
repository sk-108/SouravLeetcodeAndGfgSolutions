class Solution {
public:
    int check(vector<int>&dp,int n)
    {
        if(n == 0 || n == 1)
        {
            return n;
        }
        if(dp[n]!=-1)return dp[n];
        int ans = check(dp,n-1) + check(dp,n-2);
        return dp[n] = ans;
        
    }
    int fib(int n) {
        vector<int>dp(n+1,-1);
        return check(dp,n);
       
    }
};