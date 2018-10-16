 ///
 /// @file    :589. N-ary Tree Preorder Traversal.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-16 12:04:05
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> res;
		if(root == NULL) return res;
		int i = 0;
		res.push_back(root->val);
		while(i < (root->children).size()){
			vector<int> tmp = preorder(root->children[i]);
			res.insert(res.end(), tmp.begin(), tmp.end());
			i++;
		}
		return res;
    }
};	

int main(){
	return 0;
}
