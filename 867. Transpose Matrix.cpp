 ///
 /// @file    :867. Transpose Matrix.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-01 18:43:30
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
		vector<vector<int> > res;
		int m = A.size(), n = A[0].size();
        for(int i = 0; i < n; i++){
			vector<int> tmp;
			for(int j = 0; j < m; j++){
				tmp.push_back(A[j][i]);
			}
			res.push_back(tmp);
		}
		return res;
    }
};

int main(){
	
	return 0;
}
