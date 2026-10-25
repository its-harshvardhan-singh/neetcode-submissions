class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastSeen(128, 0);
        int maxLen = 0;
        int left = 0;

        for (int right = 0; right < (int)s.size(); right++) {
            char c = s[right];
            left = max(left, lastSeen[c]);
            lastSeen[c] = right + 1;
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
