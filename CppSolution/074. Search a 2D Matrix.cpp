 ///
 /// @file    :074. Search a 2D Matrix.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-07 11:47:01
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i = matrix.size()-1, j = 0; i >= 0 && j < matrix[0].size();){
			if(matrix[i][j] == target)
				return true;
			else if(matrix[i][j] > target)
				i--;
			else 
				j++;
		} 
		return false;
    }
};

int main(){
	
	return 0;
}
