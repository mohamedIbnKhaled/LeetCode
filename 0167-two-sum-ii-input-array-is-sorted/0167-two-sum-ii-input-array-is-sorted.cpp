class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0,right=numbers.size()-1;
        while(numbers[left]+numbers[right]!=target){
            int sum=numbers[left]+numbers[right];
            if(sum>target)right--;
            else left++;
        }
        vector<int>ans(2);
        ans[0]=left+1;
        ans[1]=right+1;
        return ans;
    }
};