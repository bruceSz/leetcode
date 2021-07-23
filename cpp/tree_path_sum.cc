#include "common.h"
bool hasPathSum(TreeNode *root, int targetSum) {
  if (!root)
    return false;
  if (targetSum == root->val && root->left == 0 && root->right == 0) {
    return true;
  }

  auto rem = targetSum - root->val;
  if (root->left && hasPathSum(root->left, rem)) {
    return true;
  }

  if (root->right && hasPathSum(root->right, rem)) {
    return true;
  }
  return false;
}
int main() {}