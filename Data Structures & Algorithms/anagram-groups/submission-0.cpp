class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> groups;
        for(const string& s:strs){
            int freq[26]={0};
            for(char c:s){
                freq[c-'a']++;
            }
            string key;
            for(int n:freq){
                key+=to_string(n);
                key+='#';
            }
            groups[key].push_back(s);
        }
        vector<vector<string>> res;
        res.reserve(groups.size());
        for(auto& [key,group]:groups){
            res.push_back(move(group));
        }
        return res;
    }
};
