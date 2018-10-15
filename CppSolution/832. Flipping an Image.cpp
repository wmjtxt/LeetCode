 ///
 /// @file    :832. Flipping an Image.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-21 18:25:25(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std; 

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
		int i, j, row = A.size(), col = A[0].size();
		for(i = 0; i < row; i++){
			for(j = 0; j < col/2; j++){
				if(A[i][j] != A[i][col-j-1]){
					int tmp = A[i][j]; 
					A[i][j] = A[i][col-j-1]; 
					A[i][col-j-1] = tmp; 
				}
				A[i][j] = (A[i][j] + 1) % 2;
				A[i][col-j-1] = (A[i][col-j-1] + 1) % 2;
			}
			if(col%2)
				A[i][j] = (A[i][j] + 1) % 2;
		}
		return A;
    }
}; 

int main(){
	Solution s;
	vector<vector<int> > input = {{1,1,0},{1,0,1},{0,0,0}};
//	input.push_back({1,1,0});
//	input.push_back({1,0,1});
//	input.push_back({0,0,0});
	for(auto item : s.flipAndInvertImage(input)){
		for(auto i : item){
			cout << i << " ";
		}
		cout << endl;
	}
	return 0; 
}
