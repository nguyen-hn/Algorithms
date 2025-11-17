#include "Solution.h"

long long Solution::countDistinct(long long n) {
    if (n < 10) return n;
        
    vector<ll> cnt_num(16, 1);
    for(ll i = 1; i <= 15; i++) {
        cnt_num[i] = cnt_num[i-1]*9LL;
    }

    // for(int i = 0; i < 15; i++) {
    //    cout << cnt_num[i] << " " << prefix_sum[i] << endl;
    // } 
    
    ll num = n;
    vector<int> digits;
    while (num > 0) {
        digits.push_back(num % 10);
        num /= 10;
    }
    reverse(digits.begin(), digits.end());
    int power = digits.size();
    ll total = 0;
    for(int i = 1; i < power; i++) {
        total += cnt_num[i] ;
    }
    for(int i = power - 1; i >= 0; --i) {
        // cout << "digit: " << digits[power-i-1] << endl;
        if (digits[power-i-1] == 0) return total;
        
        total += (ll)(digits[power-i-1]-1) * (ll)cnt_num[i];
    }
    return total + 1;
}
