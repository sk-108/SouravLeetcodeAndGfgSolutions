class Solution {
public:
    int check(vector<int>&dp , int n)
    {
        if(n == 0)return 0;
        if(n == 1 || n == 2)return 1;
        if(dp[n] != -1)return dp[n];
        int ans = check(dp,n-1) + check(dp,n-2) + check(dp,n-3);
        return dp[n] = ans;
    }
    int tribonacci(int n) {
        vector<int>dp(n+1,-1);
        return check(dp,n);
    }
};