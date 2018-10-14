 ///
 /// @file    :894. All Possible Full Binary Trees.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-30 16:16:35
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
//This problem is so hard!
public:
    vector<TreeNode*> allPossibleFBT(int N) {
		vector<TreeNode*> res;
		if(N == 1) {
			TreeNode* root = new TreeNode(0);
			res.push_back(root);
			return res;
		}
		if(N < 1 || N%2 == 0) return res;
		for(int i = 1; i < N; i=i+2){
			vector<TreeNode*> left = allPossibleFBT(i);
			vector<TreeNode*> right = allPossibleFBT(N-i-1);
			for(int j = 0; j < left.size(); j++){
				for(int k = 0; k < right.size(); k++){
					TreeNode* node = new TreeNode(0);
					node->left = left[j];
					node->right = right[k];
					res.push_back(node);
				}
			}
		}
		return res;
	}
};

int main(){
	
	return 0;
}
