 ///
 /// @file    :807. Max Increase to Keep City Skyline.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-13 18:03:33(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	int maxIncreaseKeepingSkyline(vector<vector<int>>& grid){
		int len = grid.size();
		vector<int> maxrows(len,0),maxcols(len,0);
		for(int i = 0; i < len; i++){
			int maxnum = 0;
			for(int j = 0; j < len; j++){
				if(grid[i][j] > maxnum)
					maxnum = grid[i][j];
			}
			maxrows[i] = maxnum;
		}
		for(int j = 0; j < len; j++){
			int maxnum = 0;
			for(int i = 0; i < len; i++){
				if(grid[i][j] > maxnum)
					maxnum = grid[i][j];
			}
			maxcols[j] = maxnum;
		}
		int res = 0;
		for(int i = 0; i < len; i++){
			for(int j = 0; j < len; j++){
				int tmp = (maxrows[i] > maxcols[j]) ? maxcols[j] : maxrows[i];
				if(grid[i][j] < tmp)
					res += (tmp - grid[i][j]);
			}
		}
		return res;
	}
};


int main(){
	
	return 0;
}
