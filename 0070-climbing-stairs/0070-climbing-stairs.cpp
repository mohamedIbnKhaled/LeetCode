class Solution {
public:
    int memo[46];
    int solve(int n){
        if(n==0){return 1;}
        if(memo[n]!=0)return memo[n];
        int &ret=memo[n];
        if(n-2>=0)ret+=solve(n-2);
        if(n-1>=0)ret+=solve(n-1);
        return ret;
    }
    int climbStairs(int n) {
        solve(n);
        return memo[n];
    }
};