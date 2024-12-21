class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int longest=1;
        int len=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                len++;
            }else if(nums[i]>nums[i-1]+1){
                longest=max(len,longest);
                len=1;
            }
        }
         longest=max(len,longest);
        if(nums.size()==0)longest=0;
        return longest;
    }
};