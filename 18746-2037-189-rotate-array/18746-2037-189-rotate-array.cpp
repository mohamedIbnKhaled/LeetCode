class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k-=nums.size()*(k/nums.size());
        int left=k;
        left=(nums.size()-left);
        int right=0;
        vector<int>arr;
        for(;left<nums.size();left++)arr.push_back(nums[left]);
        left=k;
        left=(nums.size()-left);
        for(;right<left;right++)arr.push_back(nums[right]);
        for(int i=0;i<nums.size();i++)nums[i]=arr[i];
    }
};