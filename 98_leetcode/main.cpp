#include "Solution.h"
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    Solution sol;
    
    std::vector<int> hand{1,2,3,6,2,3,4,7,8};
    int groupSize = 3;

    cout << sol.isNStraightHand(hand, groupSize) << endl;
}
