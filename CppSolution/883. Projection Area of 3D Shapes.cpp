 ///
 /// @file    :883. Projection Area of 3D Shapes.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-05 11:29:58
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
		int top = 0, row = 0, res = 0;
		vector<int> col(grid[0].size(),0);
		for(int i = 0; i < grid.size(); i++){
			int tmp = 0;
			for(int j = 0; j < grid[0].size(); j++){
				if(grid[i][j] != 0) ++top;
				tmp = max(tmp, grid[i][j]);
				col[j] = max(col[j],grid[i][j]);
			}
			row += tmp;
		}
        res = row + top;
		for(auto item : col)
			res += item;
		return res;
    }
};

int main(){
	Solution s;
	vector<vector<int>> g = {[1,0],[0,2]};
	cout << s.projectionArea(g) << endl;
	return 0;
}
