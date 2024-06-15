#include "Solution.h"

bool Solution::isBalanced(TreeNode *root)
{
    if (root == nullptr) return true;
    int l = height(root->left);
    int r = height(root->right);
    return (abs(l - r) <= 1 && isBalanced(root->left) && isBalanced(root->right)) ? true : false;
}
