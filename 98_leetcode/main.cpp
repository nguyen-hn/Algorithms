#include "Solution.h"
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    Solution sol;
    int row = 3, col = 3;
    vector<vector<int>> cells = {{1,2}, {2,1}, {3,3}, {2,2}, {1,1}, {1,3}, {2,3}, {3,2}, {3,1}};
    cout << sol.latestDayToCross(row, col, cells) << endl;
}
