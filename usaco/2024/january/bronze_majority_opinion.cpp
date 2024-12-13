#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
using pii = std::pair<int,int>;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> good;
    bool has_good = false;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        v[i]--;
        if ( ((i > 0) && (v[i] == v[i-1])) || ((i > 1) && (v[i] == v[i-2])) ) {
            good[v[i]] = 1;
            has_good = true;
        }
    }
    //for(auto e: v) cout << e << " ";
    //cout << endl;

    for(int i = 0; i < n; i++) {
        if (good[i] == 1) cout << (i + 1) << " ";
    }

    if (!has_good) cout << -1;
    cout << '\n';
}

int main (int argc, char *argv[]) {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
