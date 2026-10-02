class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i:arr)mp[i]++;
        set<int> st;
        for(auto i:mp)st.insert(i.second);
        if(st.size()==mp.size()) return true;
        return false;
    }
};