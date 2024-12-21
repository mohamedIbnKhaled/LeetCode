class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,int>m;
        vector<vector<string>>ans;
        int counter=0;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(strs[i].begin(),strs[i].end());
            if(m[strs[i]]>0){
                ans[m[strs[i]]-1].push_back(s);
            }else{
                m[strs[i]]=counter+1;
                ans.push_back({s});
                counter++;
            }
        }
        return ans;
    }
};