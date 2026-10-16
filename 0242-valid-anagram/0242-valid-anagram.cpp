class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int freq_s[26];
        int freq_t[26];
        for(int i=0;i<s.size();i++){
            freq_s[s[i] - 'a'] ++;
            freq_t[t[i] - 'a'] ++;
        }
        for(int i=0;i<26;i++){
            if(freq_s[i]!=freq_t[i]) return false;
        }
        return true;
    }
};