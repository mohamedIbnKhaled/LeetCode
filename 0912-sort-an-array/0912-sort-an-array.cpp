class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<int>ans;
        for(auto m : freq){
            while((m.second)--){
                ans.push_back(m.first);
            }
        }
        return ans;
    }
};