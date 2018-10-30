 ///
 /// @file    :429. N-ary Tree Level Order Traversal.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-30 11:24:26
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <queue>
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
    vector<vector<int>> levelOrder(Node* root) {
		vector<vector<int>> res;
		if(root == NULL) return res;
		queue<Node*> level;
		level.push(root);
		while(!level.empty()){
			vector<int> tmp;
			int i = 0, n = level.size();
			while(i < n){
				for(auto item : level.front()->children){
					level.push(item);
				}
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
