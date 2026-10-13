class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int &i:nums)i=i*i;
        int n=nums.size();
        nth_element(begin(nums),begin(nums)+n/2,end(nums)); //partial sort - put n/2th index ele right and all smaller on left and larger on right in any order - (O(n))
        long long first=accumulate(begin(nums),begin(nums)+n/2,0LL); //sum of first half
        long long second=accumulate(begin(nums)+n/2,end(nums),0LL); //sum of second half
        return second-first;
    }
};