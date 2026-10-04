class Solution {
public:
    bool checkValidString(string s) {
        stack<int> st1;
        stack<int> st2;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')st1.push(i);
            else if(s[i]=='*') st2.push(i);
            else if(!st1.empty() && s[i]==')') st1.pop();
            else if(!st2.empty() && s[i]==')') st2.pop();
            else return false;
        }
        while(!st1.empty()){
            if(!st2.empty() && st1.top()<st2.top()){
                st1.pop(); st2.pop();
            }
            else break;
        }
        if(st1.empty()) return true;
        return false;
    }
};