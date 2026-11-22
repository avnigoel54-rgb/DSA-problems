class Solution {
public:
    bool checkString(string s) {
        int k=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b'){ k=i; break; }
        }
        if(k!=-1){
            for(int i=k+1;i<s.size();i++){
                if(s[i]=='a') return false;
            }
        }
        return true;
    }
};