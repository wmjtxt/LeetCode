 ///
 /// @file    :701. Insert into a Binary Search Tree.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-06 20:25:41
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
		TreeNode* pcur = root;
        while(pcur != NULL){
			if(pcur->val > val){
				if(pcur->left != NULL)
					pcur = pcur->left;
				else{
					pcur->left = new TreeNode(val);
					break;
				}
			}
			else{
				if(pcur->right != NULL)
					pcur = pcur->right;
				else{
					pcur->right = new TreeNode(val);
					break;
				}
			}
		}
		return root;
    }
};


int main(){
	
	return 0;
}
