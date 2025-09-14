class Solution {
public:
    unordered_map<int,int>memo;
    int solve(int s,int n){
        if(n==s)return 1;
        if(s>n)return 0;
        if(memo.find(s) != memo.end())return memo[s];
        return memo[s]=solve(s+1,n)+solve(s+2,n);
    }
    int climbStairs(int n) {
        return solve(0,n);
        
    }
};