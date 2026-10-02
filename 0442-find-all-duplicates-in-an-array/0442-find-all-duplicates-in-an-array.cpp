class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int x:nums){
            int i=abs(x);
            if(nums[i-1]<0)ans.push_back(i);
            else nums[i-1]*=-1;
        }
        return ans;
    }
};