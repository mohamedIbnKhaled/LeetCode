class Solution {
public:
    int rob(vector<int>& nums) {
        int len=nums.size();
        vector<int> dp(len);
        int ans=0;
        for(int i=0;i<len;i++){
            int val=0;
            int rkm=i-2;
            while(rkm>=0){
                val=max(val,dp[rkm]);
                rkm--;
            }
            dp[i]=nums[i]+val;
            ans=max(dp[i],ans);
            
        }
        return ans;
    }
};