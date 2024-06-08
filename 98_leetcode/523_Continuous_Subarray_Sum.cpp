#include "Solution.h"

bool Solution::checkSubarraySum(vector<int>& nums, int k)
{
    if (nums.size() == 1) return false;
    std::map<int, int> mp;
    mp[0] = -1;
    int sum = 0;
    for(int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (k != 0) sum %= k;
        if (sum == 0 && i >= 2) return true;
        // cout << sum << " ~ " << i << endl;
        if (mp.find(sum) != mp.end()) {
            // cout << "prev: " << mp[sum] << ", " << i << endl;
            if (i - mp[sum] > 1)
                return true;
        } else {
            mp[sum] = i;    
        }
        
    }
    // cout << "===============\n";
    // for(const auto& [key, val]: mp) cout << key << "~ " << val << endl;
    return false;
}
