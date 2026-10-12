class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        int MOD = 1e9 + 7;
        long long ans=0;
        int freq_set_bit[32]={0};
        for(int i:nums){
            for(int bit=0;bit<32;bit++)
                if(i&(1<<bit)) freq_set_bit[bit]++;
        }
        while(k--){
            long long curr=0;
            for(int i=0;i<32;i++){
                if(freq_set_bit[i]>0){
                    freq_set_bit[i]--;
                    curr|=1<<i;
                }
            }
            ans=(ans+(curr*curr))%MOD;
        }
        return ans;
    }
};