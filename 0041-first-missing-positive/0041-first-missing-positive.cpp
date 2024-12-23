class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    unordered_map<int,int>freq;
        for(const auto& num : nums){
            freq[num]++;
        }
        int ans;
        for(int i=1;i<=nums.size()+1;i++){
            if(!freq[i]){ans=i;break;}
        }
        return ans;
    }
};