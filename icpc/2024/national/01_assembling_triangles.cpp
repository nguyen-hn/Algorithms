#include <iostream>
#include <map>

using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    map<ll, ll> mp;
    ll x;
    for(int i = 0; i < n; i++) {
        cin >> x;
        mp[x]++;
    }
    
    ll ans = 0;
    ll sum = 0;
    for(auto [k,v]: mp) {
        if (v >= 3) ans += v*(v-1)*(v-2)/6;
        if (v >= 2) ans += v*(v-1)*sum/2;
        sum += v;
    }
    cout << ans << endl;
}

int main(int argc, char *argv[]) {
    int T;
    std::cin >> T;
    while(T--) {
       solve();
    }
    return 0;
}
