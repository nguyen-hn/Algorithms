#include "Solution.h"
#include <cassert>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    Solution sol;

    string s = "abc";
    assert(sol.clearDigits(s) == "abc");

    vector<int> skills {4,2,6,3,9};
    int k = 2;
    assert(sol.findWinningPlayer(skills, k) == 2);

    vector<int> heights{1, 1, 4, 2, 1, 3};
    assert(sol.heightChecker(heights) == 3);

    vector<int> seats {3, 1, 5};
    vector<int> students {2, 7, 4};
    assert(sol.minMovesToSeat(seats, students) == 4);
    return 0;
}
