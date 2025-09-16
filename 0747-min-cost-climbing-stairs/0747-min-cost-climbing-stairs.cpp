class Solution {
public:
    unordered_map<int,int>memo;
    int solve(int ind,vector<int>& cost){
    if(ind>=cost.size())return 0;
    if(memo.find(ind) != memo.end())return memo[ind];
    return memo[ind]=min(solve(ind+1,cost)+cost[ind],solve(ind+2,cost)+cost[ind]);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        return min(solve(0,cost),solve(1,cost));
    }
};