class Solution {
public:
    int minInsertions(string s) {
        int cnt=0,ans=0,n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(') cnt++;
            else{
                if(cnt>0){
                    if(i<n-1 && s[i+1]==')'){
                        cnt--; i++;
                    }
                    else {ans++; cnt--;}
                }
                else{
                    ans++;
                    if(i<n-1 && s[i+1]==')') i++;
                    else ans++;
                }
            }
        }
        if(cnt) ans+=2*cnt;
        return ans;
    }
};