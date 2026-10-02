class Solution {
public:
    string s="";
    int t=s.size();
    int open=0;
    vector<string> ans;
    void solve(string s,int curr,int n,int open){
        if(curr==2*n){
            ans.push_back(s);  // no need of checking valid because of "open" check
            return ;
        }
        if(open<n) solve(s+"(",curr+1,n,open+1);
        if(curr - open < open) solve(s+")",curr+1,n,open);
    }
    vector<string> generateParenthesis(int n) {
        solve(s,t,n,open);
        return ans;
    }
};