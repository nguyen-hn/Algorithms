#include "Solution.h"
#include <vector>

TreeNode* Solution::balanceBST(TreeNode* root)
{
    vector<int> inorderVal;
    inorder(root, inorderVal);

    return inorderToBST(0, inorderVal.size() - 1, inorderVal);
}
