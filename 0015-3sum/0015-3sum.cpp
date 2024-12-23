class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<string,int>freq;
        int rkm=nums.size()-1;
        vector<vector<int>>ans;
        while(nums[rkm]>0&&rkm>1){
            int left=0,right=rkm-1;
            while(left<right){
                int val=nums[rkm]+nums[left]+nums[right];
                if(val==0){
                    string s=to_string(nums[rkm])+',';
                    s+=to_string(nums[left])+',';
                    s+=to_string(nums[right])+',';
                    if(!freq[s])
                    ans.push_back({nums[rkm],nums[left],nums[right]});
                    freq[s]++;
                    right--;
                }else if(val>0){
                    right--;
                }else{
                    left++;
                }
                
            }
            rkm--;
        }
        
            int z=0;
            for(const auto& num : nums){if(num==0)z++;}
            if(z>=3)ans.push_back({0,0,0});
        
        return ans;
    }
};