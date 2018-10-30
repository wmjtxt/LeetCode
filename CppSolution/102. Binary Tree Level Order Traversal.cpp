 ///
 /// @file    :102. Binary Tree Level Order Traversal.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-30 11:54:39
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int> > res;
        if(root == NULL) return res;
		queue<TreeNode*> level;
		level.push(root);
		while(!level.empty()){
			vector<int> tmp;
			int i = 0, n = level.size();
			while(i < n){
				if(level.front()->left)
					level.push(level.front()->left);
				if(level.front()->right)
					level.push(level.front()->right);
				tmp.push_back(level.front()->val);
				level.pop();
				i++;
			}
			res.push_back(tmp);
		}
		return res;
    }
};
int main(){
	
	return 0;
}
