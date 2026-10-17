class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int> st;
        int t,r;
        for(int i=1;i<=nums.size();i++){
            if(st.find(nums[i-1])!=st.end()) t=nums[i-1];
            st.insert(nums[i-1]);
        }
        for(int i=1;i<=nums.size();i++){
            if(st.find(i)==st.end())r=i;
        }
        return {t,r};
    }
};