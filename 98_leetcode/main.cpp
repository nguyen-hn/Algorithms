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
}
