class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int rkm = 1;
        int zeros=0;
        for(const auto& x: nums){
            if(x==0)zeros++;
            else rkm*=x;
        }
        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();i++){
            if(zeros>0){
                if(nums[i]!=0)ans[i]=0;
                else{
                    if(zeros>1)ans[i]=0;
                    else ans[i]=rkm;
                }
            }
            else{
                ans[i]=rkm/nums[i];
            }
        }
        return ans;
    }
};