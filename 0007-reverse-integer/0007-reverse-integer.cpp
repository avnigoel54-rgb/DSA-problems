class Solution {
public:
    int reverse(int x) {
        bool neg = (x<0);
        long long num = abs((long long)x);
        string s = to_string(num);
        std::reverse(s.begin(),s.end());
        long long rev = stoll(s);
        if(neg) rev=-rev;
        if(rev >INT_MAX or rev<INT_MIN) return 0;
        return int(rev);
    }
};