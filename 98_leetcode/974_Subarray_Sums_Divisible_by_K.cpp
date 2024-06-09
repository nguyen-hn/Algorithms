#include "Solution.h"

int Solution::subarrayDibByK(vector<int>& nums, int k)
{
    vector<int> count(k);
    count[0] = 1;
    int prefix = 0, res = 0;
    for(int a: nums) {
        prefix = (prefix + a % k + k)%k;
        res += count[prefix]++;
    }
    return res;
}
