class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> index;
        for(int i=0;i<nums.size();++i){
            int req=target-nums[i];
            if(index.contains(req)){
                return {index[req],i};
            }
            index[nums[i]]=i;
        }
        return {};
    }
};
