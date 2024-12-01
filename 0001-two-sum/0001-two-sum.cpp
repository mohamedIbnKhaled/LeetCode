class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>arr(nums.size());
        for(int i=0;i<nums.size();i++){
            arr[i]=nums[i];
        }
        int l=0,r=nums.size()-1;
          sort(nums.begin(), nums.end());
        while(r>l){
            int val=nums[l]+nums[r];
            if(val==target){
                break;
            }else{
                if(val<target)l++;
                else r--;
            }
        }
        vector<int>ans(2);
        bool flag=0;
        for(int i=0;i<nums.size();i++){
            if(arr[i]==nums[l]&&!flag){ans[0]=i;flag=1;}
            else if(arr[i]==nums[r])ans[1]=i;
        }
        return ans;
    }
};