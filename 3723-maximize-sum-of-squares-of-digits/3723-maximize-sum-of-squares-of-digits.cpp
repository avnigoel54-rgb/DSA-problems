class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum>9*num) return "";
        string ans="";
        int i=min(9,sum);
        while(num--){
            if(sum-i>=0) {sum-=i; ans+=i+'0'; i=min(9,sum);}
        }
        return ans;
    }
};