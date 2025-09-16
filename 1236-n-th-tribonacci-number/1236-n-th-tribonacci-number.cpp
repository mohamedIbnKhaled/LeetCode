class Solution {
public:
    int tribonacci(int n) {
        long long dp[n+5];
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        dp[3]=2;
        for(int i=4;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-1]-dp[i-4];
        }
        return dp[n];
    }
};