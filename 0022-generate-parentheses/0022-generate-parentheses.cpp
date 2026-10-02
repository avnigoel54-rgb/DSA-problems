class Solution {
public:
    string s="";
    int t=s.size();
    vector<string> ans;
    bool isValid(string s) {
        stack<char> st;
        for(char c:s){
            if(c=='(' or c=='{' or c=='[')st.push(c);
            else if(st.empty()) return false;
            else if(c==')' and st.top()=='(') st.pop();
            else if(c=='}' and st.top()=='{') st.pop();
            else if(c==']' and st.top()=='[') st.pop();
            else return false;
        }
        if(st.empty()) return true;
        return false;
    }
    void solve(string s,int curr,int n){
        if(curr==2*n){
            if(isValid(s)) ans.push_back(s);
            return ;
        }
        solve(s+"(",curr+1,n);
        solve(s+")",curr+1,n);
    }
    vector<string> generateParenthesis(int n) {
        solve(s,t,n);
        return ans;
    }
};