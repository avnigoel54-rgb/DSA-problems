class Solution {
public:
    int divide(int dividend, int divisor) {
        bool isPositive = (dividend<0) ^ (divisor<0) ? false : true;
        long long dvd = llabs(dividend);
        long long div = llabs(divisor);
        long long ans=0;
        while(dvd>=div){
            int q=0;
            while(dvd>=(div << (q+1))) q++;
            dvd-= div<<q;  //reducing remainder
            ans+=1LL <<q ;  // adding ans
        }
        if(!isPositive) ans= -ans;
        if(ans>INT_MAX) return INT_MAX;
        if(ans<INT_MIN) return INT_MIN;
        return ans;
    }
};