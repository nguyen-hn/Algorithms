#include "Solution.h"
#include <algorithm>
#include <vector>

int Solution::minDays(vector<int>& bloomDay, int m, int k)
{
    int n = bloomDay.size();
    if (static_cast<long long>(m)*static_cast<long long>(k) > n) return -1;
    int max_day = *std::max_element(bloomDay.begin(), bloomDay.end());
    if (static_cast<long long>(m)*static_cast<long long>(k) == n) return max_day;
    int l = 1, r = max_day;
    while (l < r) {
        int mid = (l+r) >> 1;
        vector<int> v(n, 0);
        int bouquests = 0;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if (bloomDay[i] <= mid) {
                cnt++;
                v[i] = 1;
            } else {
                bouquests += cnt/k;
                cnt = 0;
            }
        }
        bouquests += cnt/k;
        if (bouquests < m) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }
    return l;
}
