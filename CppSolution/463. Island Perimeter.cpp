 ///
 /// @file    :463. Island Perimeter.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-31 17:19:45
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
		int m = grid.size(), n = grid[0].size();
		int oneCnt = 0, conCnt = 0;
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				if(grid[i][j] == 1){
					oneCnt++;
					if(j+1 < n && grid[i][j+1] == 1)
						conCnt++;
					if(i+1 < m && grid[i+1][j] == 1)
						conCnt++;
				}
			}
		}
		return 4*oneCnt - 2*conCnt;
    }
};

int main(){
	
	return 0;
}
