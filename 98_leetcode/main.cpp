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

    vector<int> nums {3,2,1,2,1,7};
    assert(sol.minIncrementForUnique(nums) == 6);
    
    int c = 5;
    assert(sol.judgeSquareSum(c));

    vector<int> difficulty {2,4,6,8,10};
    vector<int> profit {10,20,30,40,50};
    vector<int> worker {4,5,6,7};
    assert(sol.maxProfitAssignment(difficulty, profit, worker) == 100);

    vector<int> bloomDay = {1,10,3,10,2};
    assert(sol.minDays(bloomDay, 3, 2) == -1);
    
    vector<int> position = {1,2,3,4,7};
    int m = 3;
    assert(sol.maxDistance(position, m) == 3);
    return 0;
}
