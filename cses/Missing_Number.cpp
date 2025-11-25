#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <unordered_set>
#include <set>
#include <climits>
#include <algorithm>
#include <string>
#include <string.h>
#include <iomanip>
#include <utility>
#include <functional>
#include <numeric>
#include <sstream>
#include <cmath>
#include <cassert>
#include <chrono>

using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
#define FORI(idx, container) for (size_t idx = 0; idx < (container).size(); ++idx)
#define FOR_EACH(item, container) for(auto &item: (container))
#define FOR_EACH1(key, val, container) for(auto &[key, val]: (container))
#define FORI1(i, a, b) for(int i = a; i < (b); i++)
#define SORT(container) sort(container.begin(), container.end())

int main(int argc, char *argv[]) {
    ll n;
    cin >> n;
    ll sum = n*(n+1)/2;
    for(int i = 0; i < n-1; i++) {
        ll t;
        cin >> t;
        sum -= t;
    }
    cout << sum << endl;
    
    return 0;
}
