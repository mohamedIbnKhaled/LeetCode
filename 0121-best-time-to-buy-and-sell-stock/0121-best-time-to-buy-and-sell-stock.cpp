class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx=0;
        int num=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<num)num=prices[i];
            mx=max(mx,prices[i]-num);
        }
        return mx;
    }
    
};