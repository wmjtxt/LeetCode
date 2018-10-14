 ///
 /// @file    :700. Search in a Binary Search Tree.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-12 18:56:45
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
    TreeNode* searchBST(TreeNode* root, int val) {
		if(root == NULL || root->val == val) return root;
		if(root->val > val) return searchBST(root->left,val);
		if(root->val < val) return searchBST(root->right,val);
    }
};
int main(){
	
	return 0;
}
