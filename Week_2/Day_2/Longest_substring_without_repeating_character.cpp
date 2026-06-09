class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[256];
        int n = s.size();
        int l = 0, r = 0, maxlength = 0;
        for (int i = 0; i < 256; i++) {
            hash[i] = -1;
        }
        while (r < n) {
            if (hash[s[r]] != -1) {
                if (hash[s[r]] >= l) {
                    l = hash[s[r]] + 1;
                }
            }
            int len = r - l + 1;
            maxlength = max(len, maxlength);
            hash[s[r]] = r;
            r++;
        }
        return maxlength;
    }
};
