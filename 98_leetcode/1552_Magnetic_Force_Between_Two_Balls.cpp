#include "Solution.h"

int Solution::maxDistance(vector<int>& position, int m) {
    int n = position.size();
    sort(position.begin(), position.end());
    int l = 0, r = position[n-1] - position[0];
    // cout << n << endl;
    int ans = 0;
    while (l <= r) {
        int mid = (l+r) >> 1;
        // cout << "l: " << l << "\tr: " << r << "\tmid: " << mid << endl;
        int cnt = 0;
        int i = 0;
        while (i < n) {
            int j = i;
            while (j < n && (position[j] - position[i] < mid)) j++;
            cnt++;
            if (j > i)
                i = j;
            else i++;
        }
        // cout << "cnt: " << cnt << endl;
        if (cnt < m) {
            r = mid - 1;
        } else if (cnt == m) {
            ans = mid;
            l = mid + 1;
        } else {
            ans = mid;
            l = mid + 1;
        }
    }
    return ans;
}
