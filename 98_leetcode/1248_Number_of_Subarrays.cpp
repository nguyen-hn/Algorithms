#include "Solution.h"

int Solution::numberOfSubarrays(vector<int>& nums, int k) {
    int n = nums.size();
    int ans = 0;
    map<int, int> mp;
    mp[0] = 1;
    for(int i = 0; i < nums.size(); i++) {
        nums[i] = (i == 0) ? (nums[i] & 1) : ((nums[i] & 1) + nums[i-1]);
    }
    //cout << "nums: ";
    for(auto e: nums) {
        //cout << e << ",";
        mp[e]++;
    }
    //cout << endl;
    for(auto [l,v]:mp) {
        // cout << l << "," << v << endl;
        if (l >= k) ans += (v*mp[l-k]);
    }

    return ans;
}
