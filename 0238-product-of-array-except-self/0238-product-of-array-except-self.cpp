class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),1);
        int pfx=1,sfx=1;
        for(int i=0;i<nums.size();i++){
            ans[i]=pfx;
            pfx*=nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]*=sfx;
            sfx*=nums[i];
        }
        return ans;
    }
};