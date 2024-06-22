#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <stack>
#include <cassert>
#include <cmath>
#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right): val(x), left(left), right(right) {}
};

class Solution {
public:
    // 39 Combination Sum
    vector<vector<int>> combinationSum(vector<int>& candidates, int target);
    // 75 Sort Colors
    void sortColors(vector<int>& nums);
    // 110 Balanced Binary Tree
    bool isBalanced(TreeNode* root);
    // 390 Elimination Game
    int lastRemaining(int n);
    // 523 Continuous Subarray Sum
    bool checkSubarraySum(vector<int>& nums, int k);
    // 633 Sum of Square Numbers
    bool judgeSquareSum(int c);
    // 648 Replace Words
    string replaceWords(vector<string>& dictionary, string sentence);
    // Most Profit Assigning Work
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker);
    // 846. Hand of Straights
    bool isNStraightHand(vector<int>& hand, int groupSize);
    // 945 Minimum Increment to Make Array Unique
    int minIncrementForUnique(vector<int>& nums);
    // 974 Subarray Sums Divisible by K
    int subarrayDibByK(vector<int>& nums, int k);
    // 1051 Height Checker
    int heightChecker(vector<int>& heights);
    // 1052 Grumpy Bookstore Owner
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes);
    // 1122 Relative Sort Array
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2);
    // 1248 Count Number of Nice Subarrays
    int numberOfSubarrays(vector<int>& nums, int k);
    // 1482 Minimum Number of Days to Make m Bouquets
    int minDays(vector<int>& bloomDay, int m, int k);
    // 1552 Magnetic Force Between Two Balls
    int maxDistance(vector<int>& position, int m);
    // 1970 Last Day Where You can Still Cross
    int latestDayToCross(int row, int col, vector<vector<int>>& cells);
    // 2037 Minimum Number of Move to Sear Everyone
    int minMovesToSeat(vector<int>& seats, vector<int>& students);
    // 2064 Minimized Maximum of Products Distributed to Any Store
    int minimizedMaximum(int n, vector<int>& quantities);
    // 3174 Clear Digits
    string clearDigits(string s);
    // 3175 Find the First Player to Win K Game in a Row
    int findWinningPlayer(vector<int>& skills, int k);
private:
    std::vector<std::vector<int>> direction{{1,0}, {0,1}, {-1, 0}, {0,-1}};

protected:
    struct TrieNode {
        TrieNode *childNode[26];
        bool wordEnd;

        TrieNode() {
            wordEnd = false;
            for(int i = 0; i < 26; i++) {
                childNode[i] = NULL;
            }
        }
    };


    void insert_key(TrieNode* root, string& key);
    string search_root(TrieNode* root, string& key);

    void findSubset(vector<int>& arr, int k, vector<int>& r, vector<vector<int>>& subset, int id);

    int height(TreeNode *root);

    bool dfs(int x, int y, vector<vector<int>>& grid, vector<vector<bool>>& visited);
};

#endif // SOLUTION_H
