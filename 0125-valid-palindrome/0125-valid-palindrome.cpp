class Solution {
public:
    bool isPalindrome(string s) {
        string ns;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i]))ns+=tolower(s[i]);
            else if(s[i]>='0'&&s[i]<='9')ns+=s[i];
        }
        int l=0,r=ns.size()-1;
        bool ans=true;
        while(l<r){
            if(ns[l]!=ns[r]){ans=false;break;}
            l++;
            r--;
        }
        return ans;
    }
};