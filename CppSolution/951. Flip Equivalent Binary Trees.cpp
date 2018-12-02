 ///
 /// @file    :951. Flip Equivalent Binary Trees.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-02 16:30:58(NewYork time)
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
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
		if(root1 == NULL && root2 == NULL)
			return true;
		if(root1 == NULL || root2 == NULL)
			return false;
		if(root1->val != root2->val)
			return false;
		return flipEquiv(root1->left,root2->left) && flipEquiv(root1->right,root2->right) || 
			   flipEquiv(root1->left,root2->right) && flipEquiv(root1->right,root2->left);
    }
};

int main(){
	
	return 0;
}
