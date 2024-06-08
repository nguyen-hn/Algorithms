#include "Solution.h"
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    Solution sol;

    vector<int> nums {22,2,4,6,7};
    int k = 6;
    cout << sol.checkSubarraySum(nums, k) << endl;
}
