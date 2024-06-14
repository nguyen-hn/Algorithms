#include "Solution.h"
#include <vector>

int Solution::minIncrementForUnique(vector<int>& nums)
{
    map<int, int> mp;
    int ans = 0;
    for(auto e: nums) mp[e]++;
    for(auto &[k,v]: mp) {
        if (v > 1) {
            ans += (v-1);
            mp[k+1] += (v-1);
            v = 1;
        }
    }
    return ans;
}
