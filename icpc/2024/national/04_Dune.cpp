#include <iostream>

using namespace std;

void solve() {
    int g, w, r, t;
    cin >> g >> w >> r >> t;
    int cycle = g + w + r;
    if (t >= cycle) t = t%cycle;
    if (t < g) {
        cout << "Guiding Beat\n";
    } else if (t  < g+w) {
        cout << "Warning Beat\n";
    } else if (t  < g+w+r) {
        cout << "Resting Phase\n";
    }
}

int main(int argc, char *argv[]) {
    int T;
    std::cin >> T;
    while(T--) {
       solve();
    }
    return 0;
}
