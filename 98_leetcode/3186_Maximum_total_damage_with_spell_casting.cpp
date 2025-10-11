#include "Solution.h"

long long Solution::maximumTotalDamage(vector<int>& power)
{
    map<int, ll> freq;
        //vector<ll> freq(MAX_SZ, 0);
        vector<ll> unique_elements;
        for(int& e: power) {
            freq[e]++;
        }
        int n = freq.size();
        for(auto& [k,_]: freq) {
            unique_elements.push_back(k);
        }
        vector<ll> dp(n, 0l);
        dp[0] = unique_elements[0]*freq[unique_elements[0]];
        if (n == 1) return dp[0];
        if (unique_elements[1] - unique_elements[0] > 2) {
            dp[1] = unique_elements[1]*freq[unique_elements[1]] + dp[0];
        } else {
            dp[1] = max(unique_elements[1]*freq[unique_elements[1]], dp[0]);
        }
        if (n == 2) return dp[1];
        
        if (unique_elements[2] - unique_elements[1] > 2) {
            dp[2] = unique_elements[2]*freq[unique_elements[2]] + dp[1];
        } else if (unique_elements[2] - unique_elements[0] > 2) {
            dp[2] = max(unique_elements[2]*freq[unique_elements[2]] + dp[0], dp[1]);
        } else {
            dp[2] = max(unique_elements[2]*freq[unique_elements[2]], dp[1]);
        }
        if (n == 3) return dp[2];

        for(int i = 3; i < n; i++) {
            int spell_cast = unique_elements[i]*freq[unique_elements[i]];
            if (unique_elements[i] - unique_elements[i-1] > 2) {
                dp[i] = spell_cast + dp[i-1];
            } else if (unique_elements[i] - unique_elements[i-2] > 2) {
                dp[i] = max(spell_cast + dp[i-2], dp[i-1]);
            } else {
                dp[i] = max(spell_cast + dp[i-3], dp[i-1]);
            }
        }
        // for(int i = 0; i < n; i++) cout << dp[i] << " ";

        return dp[n-1];
}
