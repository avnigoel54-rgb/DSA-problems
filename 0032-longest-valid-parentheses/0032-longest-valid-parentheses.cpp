class Solution {
public:
    int longestValidParentheses(string s) {
        int mx=0,open=0,close=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')open++;
            else close++; 
            if(close>open){
                close=0; open=0;
            }
            if(open==close){
                mx=max(mx,open+close);
            }
        }
        open=0,close=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==')')close++;
            else open++;
            if(open>close){
                open=0; close=0;
            }
            if(open==close){
                mx=max(mx,open+close);
            }
        }
        return mx;
    }
};