class Solution {
public:
    int scoreOfParentheses(string s) {
        int score=0,curr=0;
        for(int i=0;i<s.size(); i++){
            if(s[i]=='('){
                curr++;
            }
            else{
                curr--;
                if(i!=0 && s[i-1]=='(') score+=1<<curr;
            }
        }
        return score;
    }
};