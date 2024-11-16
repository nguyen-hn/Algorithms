#include "Solution.h"
#include <deque>
#include <vector>


vector<int> Solution::resultsArray(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> result(n - k + 1);
    deque<int> indexDeque;
    for(int i = 0; i < n; i++) {
        if (!indexDeque.empty() && indexDeque.front() < i - k + 1) {
            indexDeque.pop_front();
        }
        if (!indexDeque.empty() && nums[i] != nums[i - 1] + 1) {
            indexDeque.clear();
        }
        indexDeque.push_back(i);
        if (i >= k-1) {
            if (indexDeque.size() == k) {
                result[i - k + 1] = nums[indexDeque.back()];
            } else {
                result[i - k + 1] = -1;
            }
        }
    }
    

    return result;
}
