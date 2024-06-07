#include "Solution.h"

void Solution::insert_key(TrieNode* root, string& key) {
    TrieNode *currentNode = root;
    for(auto c: key) {
        if (currentNode->childNode[c - 'a'] == NULL) {
            TrieNode* newNode = new TrieNode();
            currentNode->childNode[c - 'a'] = newNode;
        }
        currentNode = currentNode->childNode[c-'a'];
    }
    currentNode->wordEnd = true;
}

string Solution::search_root(TrieNode* root, string& key)
{
    TrieNode* currentNode = root;
    string res = "";
    for(auto c: key) {
        if (currentNode->childNode[c-'a'] == NULL) {
            return currentNode->wordEnd ? res : "";
        }
        if (currentNode->wordEnd) return res;
        res += string(1, c);
        currentNode = currentNode->childNode[c - 'a'];
    }
    return res;
}

bool Solution::dfs(int x, int y, std::vector<std::vector<int>> &grid
                   , std::vector<std::vector<bool>>& visited)
{
    int row = grid.size();
    int col = grid[0].size();

    if (x == (row - 1)) return true;
    visited[x][y] = true;
    bool res = false;
    for(int i = 0; i < direction.size(); i++) {
        int next_x = x + direction[i][0];
        int next_y = y + direction[i][1];
        // cout << next_x << ", " << next_y << endl;
        if ((next_x >= 0) && (next_x < row) && (next_y >= 0) && (next_y < col) && (grid[next_x][next_y] == 0) && (visited[next_x][next_y] == false)) {
                res = res | dfs(next_x, next_y, grid, visited);
            if (res) return true;
        }
    }
    return res;
}
