 ///
 /// @file    :814. Binary Tree Pruning.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-23 12:06:53(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
		if(!helper(root)) return NULL;
		root->left = pruneTree(root->left);
		root->right = pruneTree(root->right);
		return root;
    }
	bool helper(TreeNode* root){
		if(root == NULL) return false;
		if(root->val) return true;
		return (helper(root->left) || helper(root->right));
	}
};

int main(){
	
	return 0;
}
