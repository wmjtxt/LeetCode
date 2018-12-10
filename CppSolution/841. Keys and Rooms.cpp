 ///
 /// @file    :841. Keys and Rooms.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-10 13:40:04
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
		int n = rooms.size();
		visited.resize(n,0);
		visited[0] = 1;
		visit(0,rooms);
        for(int i = 0; i < n; i++){
			if(!visited[i])
				return false;
		}
		return true;
    }
	void visit(int i,vector<vector<int>>& rooms){
		if(visited[i]){
			for(int j = 0; j < rooms[i].size(); j++){
				if(!visited[rooms[i][j]]){
					visited[rooms[i][j]] = 1;
					visit(rooms[i][j],rooms);
				}
			}
		}
	}
private:
	vector<int> visited;
};

int main(){
	
	return 0;
}
