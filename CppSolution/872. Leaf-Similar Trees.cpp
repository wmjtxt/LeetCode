 ///
 /// @file    :872. Leaf-Similar Trees.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-24 20:13:09
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(leaf(root1) == leaf(root2))
			return true;
		else 
			return false;
    }
	vector<int> leaf(TreeNode* root){
		vector<int> res;
		if(root == NULL)
			return res;
		if(root->left == NULL && root->right == NULL){
			res.push_back(root->val);
		}
		else{
			res = leaf(root->left);
			vector<int> right = leaf(root->right);
			res.insert(res.end(),right.begin(),right.end());\
		}
		return res;
	}
};

int main(){
	
	return 0;
}
