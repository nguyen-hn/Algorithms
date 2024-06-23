#include "Solution.h"
#include <vector>

int Solution::maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes)
{
int ans = 0;
    int sum = 0;
    int n = customers.size();
    vector<int> v(n+1, 0);
    v[n-1] = grumpy[n-1] == 0 ? customers[n-1] : 0;
    for(int i = n-2; i>=0; i--) {
        v[i] = (grumpy[i] == 0) ? v[i+1] + customers[i] : v[i+1]; 
    }
    for(int i = 0; i < minutes; i++) sum += customers[i];
    ans = sum + v[minutes];
    // cout << "ans: " << ans << endl;

    for(int i = minutes; i < customers.size(); i++) {
        sum -= (grumpy[i - minutes] == 1) ? customers[i - minutes]: 0;
        sum += customers[i];
        // cout << "sum: " << sum << endl;
        ans = max(ans, sum + v[i+1]);
        // cout << i << "\t" << ans << endl;
    }
    return ans;
}
