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
    pii st, ed;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < m; j++) {
            if (s[j] == '#') {
                v[i][j] = 1;
            } else if (s[j] == 'A') {
                st = {i, j};
            } else if (s[j] == 'B') {
                ed = {i, j};
            }
        }
    }
    vector<int> directions{-1, 0, 1, 0, -1};
    string str_directions = "URDL";
    queue<pii> q;
    q.push(st);
    vvi dist(n, vi(m, -1));
    vvi visited(n, vi(m, 0));
    vvi paths(n, vi(m, 0));
    /*dist[st.first][st.second] = 0;*/
    visited[st.first][st.second] = 1;
    //paths[st] = "";
    while (!q.empty()) {
        pii curr = q.front();
        q.pop();
        int x = curr.first;
        int y = curr.second;
        /*cout << "go to " << x << " " << y << endl;*/
        for(int k = 0; k < 4; k++) {
            int nx = x + directions[k];
            int ny = y + directions[k+1];
            if (nx < 0 || ny < 0 || nx >= n || ny >= m || v[nx][ny] == 1) continue;
            if (visited[nx][ny] == 1) continue;
            visited[nx][ny] = 1;
            q.push({nx, ny});
            /*cout << "add " << nx << " " << ny << endl;*/
            /*cout << "k " << k << " -> " << str_directions[k] << endl;*/
            /*dist[nx][ny] = dist[x][y] + 1;*/
            paths[nx][ny] = k; 
        }
    }
    if (visited[ed.first][ed.second] == 1) {
        cout << "YES\n";
        /*cout << dist[ed.first][ed.second] << endl;*/
        int x = ed.first, y = ed.second;
        vector<int> steps;
        while (x != st.first || y != st.second) {
            int k = paths[x][y];
            steps.push_back(k);
            x = x - directions[k];
            y = y - directions[k+1];
        }
        reverse(steps.begin(), steps.end());
        cout << steps.size() << endl;
        for(char c: steps) cout << str_directions[c];
        cout << endl;
    } else {
        cout << "NO\n";
    }
    return 0;
}
