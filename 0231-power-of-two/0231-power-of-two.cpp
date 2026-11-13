class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        int j=0;
        while(j<31){
            if(n == (1<<j)) return true;
            j++;
        }
        return false;
    }
};