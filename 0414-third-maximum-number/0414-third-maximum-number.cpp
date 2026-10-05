class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long mx=LLONG_MIN,smx=LLONG_MIN,tmx=LLONG_MIN;
        for(int i:nums){
            if(i==mx or i==smx or i==tmx) continue;
            if(i>mx){tmx=smx; smx=mx; mx=i;}
            else if(i>smx){tmx=smx; smx=i;}
            else if(i>tmx)tmx=i;
        }
        if(tmx!=LLONG_MIN)return tmx;
        return mx;
    }
};