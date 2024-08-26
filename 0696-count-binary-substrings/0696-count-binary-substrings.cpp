class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int>arr;
        int counter=1;
        int ans=0;
        for(int i=1;i<s.size();i++){
            if(s[i]!=s[i-1]){arr.push_back(counter);counter=1;}
            else counter++;
        }
        arr.push_back(counter);
        for(int i=0;i<arr.size()-1;i++){
            ans+=min(arr[i],arr[i+1]);
        }
        return ans;
    }
    
};