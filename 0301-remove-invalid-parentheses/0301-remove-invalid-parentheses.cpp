class Solution {
public:
    unordered_set<string> st;
    int mx_len=0;
    void solve(string& s,int i,string& curr,int cnt){
        if(cnt<0) return;
        if(i==s.size()){
            if(!(cnt)){
                if(curr.size()>mx_len){
                    mx_len=curr.size();
                    st.clear();
                }
                if(curr.size()==mx_len) st.insert(curr);
            }
            return;
        }
        if(s[i]!='(' && s[i]!=')'){
            curr+=s[i];
            solve(s,i+1,curr,cnt);
            curr.pop_back();
            return;
        }
        curr+=s[i];
        solve(s,i+1,curr,s[i]=='('?cnt+1:cnt-1);
        curr.pop_back();
        solve(s,i+1,curr,cnt);
    }
    vector<string> removeInvalidParentheses(string s) {
        string curr="";
        solve(s,0,curr,0);
        return vector<string>(begin(st),end(st));
    }
};