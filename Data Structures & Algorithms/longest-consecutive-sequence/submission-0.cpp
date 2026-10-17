class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        set<int> num;
        for(int n:nums){
            num.insert(n);
        }
        int last=INT_MIN;
        int mSize=1;
        int currS=1;
        for(const auto& n:num){
            if(n==last+1) currS++;
            else{
                mSize=max(currS,mSize);
                currS=1;
            }
            last=n;
        }
        return max(currS, mSize);
    }
};
