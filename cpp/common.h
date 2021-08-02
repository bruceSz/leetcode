#pragma once
#include <iostream>
#include <vector>
#include <queue>
using namespace std;


#define GET_ARR_LEN(x,type) (sizeof(x)/sizeof(type))

int bin_search(int x, int arr[], int len);

int b_search(int x, int arr[], int len);



class SubL {

private:
	vector<bool> used;
public:
	void sublists(vector<int>& arr);
	void doGenSub(vector<int>& arr, int idx);
};

class LNode;
struct LNodePair {
	LNode * first;
	LNode * second;

};

struct LNode {
	int val;
	LNode * next;
	LNode * prev;
};

struct TreeNode {
	int val;
	TreeNode * left;
	TreeNode* right;
	TreeNode(): val(0),left(nullptr), right(nullptr){}
	TreeNode(int val):val(val),left(nullptr), right(nullptr) {}
	TreeNode(int val, TreeNode* a, TreeNode* b) :val(val), left(a),right(b) {}
};