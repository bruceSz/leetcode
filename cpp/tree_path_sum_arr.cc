#include "common.h"

vector<vector<int>> ans;
vector<int> tmpPath;

void doPathS(TreeNode *r, int sum) {
  if (!r) {
    return;
  }
  if (r->val == sum && !(r->left) && !(r->right)) {
    tmpPath.push_back(r->val);
    ans.push_back(tmpPath);
    tmpPath.pop_back();

    // return true;
  }

  int rem = sum - r->val;
  tmpPath.push_back(r->val);
  if (r->left)
    doPathS(r->left, rem);

  if (r->right) {
    doPathS(r->right, rem);
  }
  tmpPath.pop_back();
}
vector<vector<int>> pathSum(TreeNode *root, int targetSum) {
  doPathS(root, targetSum);
  return ans;
}