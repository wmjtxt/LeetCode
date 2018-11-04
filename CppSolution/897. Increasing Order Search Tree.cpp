 ///
 /// @file    :897. Increasing Order Search Tree.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-04 09:40:31
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
    TreeNode* increasingBST(TreeNode* root) {
		helper(root);
		return res;
    }
    void helper(TreeNode* root) {
		if(root->left != NULL) helper(root->left);
		if(root != NULL){
			//cout << root->val << "-";
			if(res == NULL){
				cur = res = new TreeNode(root-val);
			}
			else {
				cur->right = new TreeNode(root-val);
				cur = cur->right;
			}
		}
		if(root->right != NULL) helper(root->right);
    }
	TreeNode* res = NULL;
	TreeNode* cur = NULL;
};
int main(){
	
	return 0;
}
