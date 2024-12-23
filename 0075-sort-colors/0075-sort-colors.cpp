class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0,b=0,w=0;
        for(const auto& x:nums){
            if(x==0)r++;
            else if(x==1)w++;
            else b++;
        }
        int counter=0;
        while(r--)nums[counter]=0,counter++;
        while(w--)nums[counter]=1,counter++;
        while(b--)nums[counter]=2,counter++;
    }
};