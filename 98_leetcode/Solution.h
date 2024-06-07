#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
    // 846. Hand of Straights
    bool isNStraightHand(vector<int>& hand, int groupSize);
    // 648 Replace Words
    string replaceWords(vector<string>& dictionary, string sentence);
    // 1970 Last Day Where You can Still Cross
    int latestDayToCross(int row, int col, vector<vector<int>>& cells);

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

    bool dfs(int x, int y, vector<vector<int>>& grid, vector<vector<bool>>& visited);
};

#endif // SOLUTION_H
