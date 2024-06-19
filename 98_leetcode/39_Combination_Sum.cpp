#include "Solution.h"
#include <vector>

vector<vector<int>> Solution::combinationSum(vector<int>& candidate, int target) {
    vector<vector<int>> ans;
    sort(candidate.begin(), candidate.end());
    candidate.erase(std::unique(candidate.begin(), candidate.end()), candidate.end());
    vector<int> sub;
    findSubset(candidate, target, sub, ans, 0);
    return ans;
}
