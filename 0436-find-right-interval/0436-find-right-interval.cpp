class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& a) {
        int n=a.size();
        vector<int> ans(n,-1);
        for(int i=0;i<n;i++){
            int best = INT_MAX;
            for(int j=0;j<n;j++){
                if(a[j][0]>=a[i][1] && a[j][0]<best){best=a[j][0]; ans[i]=j;}
            }
        }
        return ans;
    }
};