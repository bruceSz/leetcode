#include "../common.h"

void swapbt(TreeNode *r) {
  if (!r)
    return;

  TreeNode *tmp = r->left;
  r->left = r->right;
  r->right = tmp;
  swapbt(r->left);
  swapbt(r->right);
}

bool checkEqual(TreeNode *l, TreeNode *r) {
  // both equal to nullptr
  if (l == r)
    return true;
  // only one NULL.
  if (l == NULL || r == NULL)
    return false;

  if (l->val != r->val)
    return false;

  auto flag = checkEqual(l->left, r->left);
  if (!flag)
    return false;

  return checkEqual(l->right, r->right);
}

bool isSymmetric(TreeNode* root) {
  if (!root) return true;
  TreeNode* left;
  TreeNode* right;
  queue<TreeNode*> q1, q2;
  q1.push(root->left);q2.push(root->right);
  while(!q1.empty() && !q2.empty()) {
    left = q1.front();q1.pop();
    right = q2.front();q2.pop();

    if (left == NULL && right ==NULL)
      continue;

    if (left == NULL || right == NULL) 
      return false;
    if (left->val != right->val)
      return false;


    q1.push(left->left);
    q1.push(left->right);

    q2.push(right->right);
    q2.push(right->left);

  }

// no need check here, already return false if one is deeper than another.
  //if (!q1.empty() || !q2.empty())
  //  return false;
  return true;
}