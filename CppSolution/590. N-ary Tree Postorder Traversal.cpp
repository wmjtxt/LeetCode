 ///
 /// @file    :590. N-ary Tree Postorder Traversal.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-13 10:26:10
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
    vector<int> postorder(Node* root) {
        vector<int> res;
		if(root == NULL) return res;
		int i = 0;
		while(i < (root->children).size()){
			vector<int> tmp = postorder(root->children[i]);
			res.insert(res.end(), tmp.begin(), tmp.end());
			i++;
		}
		res.push_back(root->val);
		return res;
    }
};
int main(){
	
	return 0;
}
