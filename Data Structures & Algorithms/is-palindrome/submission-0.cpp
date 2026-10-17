class Solution {
public:
    bool isPalindrome(string s) {
        int n= s.length();
        string t;
        for(char c:s){
            if(('a'<=c&&c<='z')||('A'<=c&&c<='Z')||('0'<=c&&c<='9')) t += tolower(c);
        }
        int lt=t.length();
        for(int i=0;i<lt/2;++i){
            if(t[i]!=t[lt-1-i]) return false;
        }
        return true;
    }
};
