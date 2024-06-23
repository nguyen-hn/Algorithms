#include "Solution.h"
#include <vector>

double Solution::minimumAverage(vector<int>& nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    std::set<double> st;
    for(int i = 0; i < n; i++) {
        st.insert((static_cast<double>(nums[i]) + nums[n-i-1]) / 2);
    }
    return *st.begin();
}
