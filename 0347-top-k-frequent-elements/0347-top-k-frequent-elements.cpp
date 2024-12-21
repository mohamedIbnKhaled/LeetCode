class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<pair<int,int>>arr;
        for(auto& x : freq){
            arr.push_back({x.second,x.first});
        }
        sort(arr.begin(),arr.end());
        vector<int>ans;
        while(k--){
            ans.push_back(arr.back().second);
            arr.pop_back();
        }
        return ans;
    }
};