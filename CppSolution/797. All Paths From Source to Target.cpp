 ///
 /// @file    :797. All Paths From Source to Target.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-27 15:05:16(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
		vector<int> path;
		DFS(0,path,graph);
		return res;
    }
	void DFS(int i, vector<int>& path, vector<vector<int> >& graph){
		path.push_back(i);
        int len = graph.size();
		if(i == len-1){
			res.push_back(path);
			return;
		}
		//寄存path的长度
		int pathlen = path.size();
		//遍历节点i的边
		for(int j = 0; j < graph[i].size(); j++){
			while(pathlen != path.size()){
				path.pop_back();
			}
			DFS(graph[i][j],path,graph);
		}
	}
private:
	vector<vector<int> > res;
};

int main(){
	
	return 0;
}
