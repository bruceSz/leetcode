
#include "../common.h"


void toList(TreeNode* root) {
	if (root == NULL) {

		return new LNodePair();
	}

	LNode * curr = new LNode();

	LNodePair * pn = toList(root->left);
	LNodePair * nn =  toList(root->right);

	curr->left = pn->second;
	if (pn->second != NULL) {
		pn->second>right = curr;
	}

	curr->right = nn->first;
	if (nn->first != NULL) {
		nn->first->left = curr;
	}


	LNodePair* tmp =  new LNodePair();
	tmp->first = pn.first;
	tmp->second = nn.second;

	return tmp;
}