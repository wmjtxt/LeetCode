 ///
 /// @file    :513. Find Bottom Left Tree Value.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-09 17:26:23
 /// @quote   :
 ///
 
#include <iostream>
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
    int findBottomLeftValue(TreeNode* root) {
        int res;
		queue<TreeNode*> q;
		q.push(root->val);
		while(!q.empty()){
			int qsize = q.size();
			res = q.front()->val;
			for(int i = 0; i < qsize; i++){
				if(q.front()->left != NULL) q.push(q.front()->left);
				if(q.front()->right != NULL) q.push(q.front()->right);
				q.pop();
			}
		}
		return res;
    }
};

int main(){
	
	return 0;
}
