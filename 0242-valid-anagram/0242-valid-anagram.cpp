class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>freq2;
        if(s.size()!=t.size())return false;
        for(int i=0;i<t.size();i++){
            freq2[t[i]]++;
        }
        bool ans=true;
        for(int i=0;i<s.size();i++){
            if(freq2[s[i]]==0){ans=false;break;}
            freq2[s[i]]--;
        }
        return ans;
    }
};