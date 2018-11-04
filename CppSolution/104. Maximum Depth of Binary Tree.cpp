 ///
 /// @file    :104. Maximum Depth of Binary Tree.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-04 11:03:20
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
    int maxDepth(TreeNode* root) {
		int maxd = 0;
		if(root != NULL)
			maxd = max(maxDepth(root->left), maxDepth(root->right)) + 1;
		return maxd;
    }
};
int main(){
	
	return 0;
}
