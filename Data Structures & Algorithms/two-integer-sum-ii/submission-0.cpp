class Solution {
public:
    vector<int> twoSum(vector<int>& num, int t) {
        int n=num.size();
        int l=0;
        int r=n-1;
        while(l<r){
            while(l<r&&num[l]+num[r]<t) ++l;
            while(l<r&&num[l]+num[r]>t) --r;
            if(l<r&&num[l]+num[r]==t) break;
        }
        return {l+1,r+1};
    }
};
