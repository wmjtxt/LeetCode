 ///
 /// @file    :515. Find Largest Value in Each Tree Row.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-08 17:56:04
 /// @quote   :
 ///
 
#include <iostream>
#include <queue>
#include <vector>
#include <limits.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
		vector<int> res;
		if(root == NULL) return res;
        queue<TreeNode*> level;
		level.push(root);
		while(!level.empty()){
			int max = INT_MIN;
			int i = 0, n = level.size();
			while(i < n){
				if(level.front()->left)
					level.push(level.front()->left);
				if(level.front()->right)
					level.push(level.front()->right);
				if(max < level.front()->val)
					max = level.front()->val;
				level.pop();
				i++;
			}
			res.push_back(max);
		}
		return res;
    }
};
int main(){
	
	return 0;
}
