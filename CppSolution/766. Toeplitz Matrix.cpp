 ///
 /// @file    :766. Toeplitz Matrix.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-27 18:24:25
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix.size()-1; i++){
			for(int j = 0; j < matrix[0].size()-1; j++){
				if(matrix[i][j] != matrix[i+1][j+1])
					return false;
			}
		}
		return true;
    }
};

int main(){
	
	return 0;
}
