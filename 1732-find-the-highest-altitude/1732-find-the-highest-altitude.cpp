class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int mx=0;
        int curr=0;
        for(int i:gain){
            curr+=i;
            mx=max(mx,curr);
        }
        return mx;
    }
};