class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26,0);
        int n=s.length();
        int l=0, maxLen=0, best=0;
        for(int i=0;i<n;++i){
            maxLen=max(maxLen,++freq[s[i]-'A']);
            if(i-l+1-maxLen>k){
                --freq[s[l]-'A'];
                ++l;
            }
            best=max(best,i-l+1);
        }
        return best;
    }
};
