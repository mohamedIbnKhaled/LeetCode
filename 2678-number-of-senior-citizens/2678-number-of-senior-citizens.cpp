class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(int i=0;i<details.size();i++){
            string s=details[i];
            string ss=s.substr(11,2);
            if(stoi(ss)>60)ans++;
        }
        return ans;
    }
};