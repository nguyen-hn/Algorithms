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
using vvi = vector<vector<int>>;
#define FORI(idx, container) for (size_t idx = 0; idx < (container).size(); ++idx)
#define FOR_EACH(item, container) for(auto &item: (container))
#define FOR_EACH1(key, val, container) for(auto &[key, val]: (container))
#define FORI1(i, a, b) for(int i = a; i < (b); i++)
#define SORT(container) sort(container.begin(), container.end())

int main(int argc, char *argv[]) {
    int n, m;
    cin >> n >> m;
    vvi v(n, vi(m, 0));
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < m; j++) {
            v[i][j] = (s[j] == '#') ? 1 : 0;
        }
    }
    vector<int> directions {-1, 0, 1, 0, -1};
    int res = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if (v[i][j] == 0) {
                res++;
                queue<pii> q;
                v[i][j] = 1;
                q.push({i, j});
                while (!q.empty()) {
                    pii curr = q.front();
                    q.pop();
                    int x = curr.first;
                    int y = curr.second;
                    v[x][y] = 1;
                    for(int k = 0; k < 4; k++) {
                        int nx = x + directions[k];
                        int ny = y + directions[k+1];
                        if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
                        if (v[nx][ny] == 0) {
                            q.push({nx, ny});
                            v[nx][ny] = 1;
                        }
                    }
                }
            }
        }
    }
    cout << res << endl;
    return 0;
}
