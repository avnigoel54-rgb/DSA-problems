class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int left=0;
        for(int i=0;i<k;i++) left += cardPoints[i];
        int mx=left;
        int right = cardPoints.size() - 1;
        for(int i=k-1;i>=0;i--){
            left -= cardPoints[i];
            left += cardPoints[right];
            right--;
            mx=max(mx,left);
        }
        return mx;
    }
};