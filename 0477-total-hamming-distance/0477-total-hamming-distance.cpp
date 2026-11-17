class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n = nums.size();
        int sm=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int k = (nums[i] ^ nums[j]);
                sm += __builtin_popcount(k);
            }
        }
        return sm;
    }
};