 ///
 /// @file    :559. Maximum Depth of N-ary Tree-recursion.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-19 09:52:21
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {} Node(int _val, vector<Node*> _children) { val = _val; children = _children; }
};

class Solution {
public:
    int maxDepth(Node* root) {
        int res = 0, maxchi = 0;
		if(root == NULL) return res;
		res++;
		int i = 0;
		while(i < (root->children).size()){
			maxchi = max(maxchi, maxDepth(root->children[i]));
			i++;
		}
		return res+maxchi;
    }
};
int main(){
	
	return 0;
}
