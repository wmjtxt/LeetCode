 ///
 /// @file    :654. Maximum Binary Tree.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-18 16:25:39(NewYork time)
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
	TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
		if(nums.size() == 0) return NULL;
		if(nums.size() == 1){
			TreeNode *root = new TreeNode(nums[0]);
			return root;
		}
		int lefthand = 0, righthand = nums.size()-1;

		int maxnum = nums[lefthand], maxindex = lefthand;
        for(int i = lefthand+1; i <= righthand; i++){
			if(nums[i] > maxnum){
				maxnum = nums[i];
				maxindex = i;
			}
		}
		TreeNode* root = new TreeNode(maxnum);
		if(maxindex > lefthand) {
			vector<int> leftchild(nums.begin(), nums.begin()+maxindex-lefthand);
			root->left = constructMaximumBinaryTree(leftchild);
		}
		else 
			root->left = NULL;
		if(maxindex < righthand){
			vector<int> rightchild(nums.begin()+maxindex-lefthand+1, nums.end());
			root->right = constructMaximumBinaryTree(rightchild);
		}
		else 
			root->right = NULL;

		return root;
    }
};

int main(){
	Solution solution;
	vector<int> test = {3,2,1,6,0,5};
	vector<int> test1(test.begin(),test.begin()+1);
	for(auto i:test1)
		cout << i << endl;
	TreeNode *root = solution.constructMaximumBinaryTree(test);
	cout << root->val << endl;
	return 0;
}
