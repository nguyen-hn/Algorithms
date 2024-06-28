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

int Solution::height(TreeNode* root) {
    if (root == nullptr) return 0;
    return 1 + max(height(root->left), height(root->right));
}

void Solution::findSubset(vector<int>& arr, int target, vector<int>& s, vector<vector<int>>& sub, int id)
{
    if (target == 0) {
        sub.push_back(s);
        return;
    }
    while (id < arr.size() && target - arr[id] >= 0) {
        s.push_back(arr[id]);
        findSubset(arr, target - arr[id], s, sub, id);
        id++;
        sub.pop_back();
    }
}

void Solution::inorder(TreeNode* root, vector<int>& inorderval) {
    if (root == nullptr) return;
    inorder(root->left, inorderval);
    inorderval.push_back(root->val);
    inorder(root->right, inorderval);
}

TreeNode* Solution::inorderToBST(int s, int e, vector<int>& inorderval) {
    if (s > e) return nullptr;

    int mid = (s+e)/2;

    TreeNode* temp = new TreeNode(inorderval[mid]);
    temp->left = inorderToBST(s, mid - 1, inorderval);
    temp->right = inorderToBST(mid + 1, e, inorderval);

    return temp;
}
