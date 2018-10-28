 ///
 /// @file    :566. Reshape the Matrix.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-28 15:36:45
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
		int m = nums.size(), n = nums[0].size();
        if(r * c != m * n) return nums;
		vector<vector<int> > res(r,vector<int>(c));
		vector<int> tmp(m*n);
		int k = 0;
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				tmp[k++] = nums[i][j];
			}
		}
		k = 0;
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				res[i][j] = tmp[k++];
			}
		}
		return res;
    }
};

int main(){
	
	return 0;
}
