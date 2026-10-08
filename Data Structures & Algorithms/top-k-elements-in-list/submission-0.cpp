class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int n:nums){
            freq[n]++;
        }
        vector<vector<int>> fsort(nums.size()+1);
        for(auto& [key,f]:freq){
            fsort[f].push_back(key);
        }
        vector<int> res;
        for(int i=nums.size();i>=0;--i){
            for(int n:fsort[i]){
                res.push_back(n);
                if(res.size()==k) return res;
            }
        }
        return res;
    }
};
