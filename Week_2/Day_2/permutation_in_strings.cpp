class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        vector<int> count1(26, 0);
        for(int i=0;i<s1.size();i++){
            char ch = s1[i];
            count1[ch-'a']++;
        }
        vector<int> count2(26, 0);
        int window_size=s1.size();
        for(int i=0;i<window_size;i++){
            char ch=s2[i];
            count2[ch-'a']++;
        }
        if(count1==count2) return true;
        for(int i=window_size;i<s2.size();i++){
            char newch=s2[i];
            count2[newch-'a']++;
            char oldch=s2[i-window_size];
            count2[oldch-'a']--;
            if(count1==count2){
                return true;
            }
        }
        return false;
    }
};
