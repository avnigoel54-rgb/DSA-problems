class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> st;
        while(st.find(n)==st.end() && n!=1){
            st.insert(n);
            int i=n;
            n=0;
            while(i){
                n+=(i%10)*(i%10);
                i/=10;
            }
        }
        return n==1;
    }
};
