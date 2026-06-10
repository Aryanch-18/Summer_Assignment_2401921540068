class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if (p.size() > s.size()) {
            return {};
        }
        vector<int> count1(26, 0);
        for (int i = 0; i < p.size(); i++) {
            char ch = p[i];
            count1[ch - 'a']++;
        }
        vector<int> count2(26, 0);
        int window_size = p.size();
        for (int i = 0; i < window_size; i++) {
            char ch = s[i];
            count2[ch - 'a']++;
        }
        if (count1 == count2) {
            ans.push_back(0);
        }
        for (int i = window_size; i < s.size(); i++) {
            char newch = s[i];
            count2[newch - 'a']++;
            char oldch = s[i - window_size];
            count2[oldch - 'a']--;
            if (count1 == count2) {
                ans.push_back(i - window_size + 1);
            }
        }
        return ans;
    }
};
