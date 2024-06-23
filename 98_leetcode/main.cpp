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

    vector<int> quantities{11,6};
    assert(sol.minimizedMaximum(6, quantities) == 3);

    vector<int> customers = {1,0,1,2,1,1,7,5};
    vector<int> grumpy = {0,1,0,1,0,1,0,1};
    int minutes = 3;
    assert(sol.maxSatisfied(customers, grumpy, minutes) == 16);

    nums.clear();
    nums = {1,1,2,1,1};
    assert(sol.numberOfSubarrays(nums, 3) == 2);

    nums.clear();
    nums = {8,2,4,7};
    assert(sol.longestSubarray(nums, 4) == 2);


    nums.clear();
    nums = {7,8,3,4,15,13,4,1};
    assert(sol.minimumAverage(nums) == 5.5);
    return 0;
}
