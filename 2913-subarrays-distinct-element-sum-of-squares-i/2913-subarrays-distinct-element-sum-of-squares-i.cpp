class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for(int i=0;i<n;i++){
            int freq[101]={0};
            int cnt=0;
            for(int j=i;j<n;j++){
                if(freq[nums[j]]++ ==0) cnt++;
                ans+=cnt*cnt;
            }
        }
        return ans;
    }
};