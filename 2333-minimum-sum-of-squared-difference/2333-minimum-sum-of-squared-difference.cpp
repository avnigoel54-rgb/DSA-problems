class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        long long ans=0,k=k1+k2;
        long long freq[100001]={0};
        for(int i=0;i<nums1.size();i++){
            freq[abs(nums1[i]-nums2[i])]++;
        }
        for(int i=100000;i>0;i--){
            if(k>0 && freq[i]){
                int t=min(freq[i],k);
                freq[i]-=t;
                freq[i-1]+=t;
                k-=t;
            }
        }
        for(long long i=1;i<=100000;i++)ans+=i*i*freq[i];
        return ans;
    }
};