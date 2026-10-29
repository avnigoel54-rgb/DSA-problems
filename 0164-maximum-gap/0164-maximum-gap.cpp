class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int gap=0;
        int n=nums.size();
        if(n<=1) return 0;
        int mn=*min_element(nums.begin(),nums.end());
        int mx=*max_element(nums.begin(),nums.end());
        int bucket = max(1, (mx - mn + n - 2) / (n - 1)); //ceil value
        
        // all buckets mx and mn values
        int cnt = (mx - mn) / bucket + 1;
        vector<int> maxi(n-1, -1);
        vector<int> mini(n-1, INT_MAX);

        for(int i:nums){
            if(i!=mn && i!=mx){
                int bucket_idx = (i-mn)/bucket;
                mini[bucket_idx] = min(mini[bucket_idx],i);
                maxi[bucket_idx] = max(maxi[bucket_idx],i);
            }
        } //buckets and min max arrays for them formed

        for(int i=0; i<n-1; i++){
            if(maxi[i]==-1) continue;
            gap=max(gap, mini[i]-mn);
            mn=maxi[i];
        }
        gap = max(gap, mx - mn);
        return gap;
    }
};