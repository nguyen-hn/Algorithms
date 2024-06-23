#include "Solution.h"
#include <vector>

int Solution::minimizedMaximum(int n, vector<int>& quantities)
{
    int sz = quantities.size();
    sort(quantities.begin(), quantities.end());
    if (n == sz) return quantities[sz-1];
    int l = 1, r = quantities[sz-1];
    while (l < r) {
        int mid = (l+r) >> 1;
        int cnt = 0;
        for(auto q: quantities) {
            if (q < mid) cnt++;
            else cnt += (q%mid == 0) ? q/mid: (q/mid+1);
        }
        if (cnt <= n) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    return l;
}
