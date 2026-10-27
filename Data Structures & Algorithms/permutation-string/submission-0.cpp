class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq1(26,0);
        for(char c:s1){
            freq1[c-'a']++;
        }
        int n=s1.length();
        int m=s2.length();
        int l=0;
        vector<int> freq2(freq1.begin(),freq1.end());
        for(int r=0;r<m;++r){
            if(freq1[s2[r]-'a']<=0){
                while(l!=r){
                    freq2[s2[l]-'a']++;
                    ++l;
                }
                ++l;
                continue;
            }
            while(freq2[s2[r]-'a']==0){
                freq2[s2[l]-'a']++;
                ++l;
            }
            freq2[s2[r]-'a']--;
            if(r-l+1==n) return true;
        }
        return false;
    }
};