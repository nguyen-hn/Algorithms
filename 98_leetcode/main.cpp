#include "Solution.h"
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    Solution sol;

    vector<int> nums {4, 5,0, -2, -3, 1};
    int k = 5;
    cout << sol.subarrayDibByK(nums, k) << endl;
}
