class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int depth=0,n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(depth>0) ans+=s[i];
                depth++;
            }
            else { depth--; if(depth>0) ans+=s[i];}
        }
        return ans;
    }
};