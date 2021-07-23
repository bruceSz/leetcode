#pragma once
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
	int val;
	TreeNode * left;
	TreeNode* right;
	TreeNode(): val(0),left(nullptr), right(nullptr){}
	TreeNode(int val):val(val),left(nullptr), right(nullptr) {}
	TreeNode(int val, TreeNode* a, TreeNode* b) :val(val), left(a),right(b) {}
};