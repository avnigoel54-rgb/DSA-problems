class Solution {
public:
    // basic recursion code tle - tc - O(3^n)
    // so use memoization - tc - O(n^2)
    int n;
    int dp[101][101]; //2D dp array cuz 2 vars changing (i,open)
    bool solve(int i,int open, string s){
        if(open < 0) return false;
        if(i==n) return !open;
        if(dp[i][open]!=-1) return dp[i][open];
        if(s[i]=='('){
            return dp[i][open] = solve(i+1,open+1,s);
        }
        else if(s[i]=='*'){
            return dp[i][open] = solve(i+1,open+1,s) || solve(i+1,open,s) || solve(i+1,open-1,s);
        }
        return dp[i][open] = solve(i+1,open-1,s);
    }
    bool checkValidString(string s) {
        n=s.size();
        memset(dp,-1,sizeof(dp));
        bool a=solve(0,0,s);
        return a;
    }
};