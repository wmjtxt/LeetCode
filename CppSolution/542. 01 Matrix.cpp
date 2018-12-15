 ///
 /// @file    :542. 01 Matrix.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-09 17:58:56
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
		int m = matrix.size(), n = matrix[0].size();
        vector<vector<bool>> visit(m, vector<bool>(n,false));
		int cnt = 0, num = 0;
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				if(matrix[i][j] == 0){
					visit[i][j] = true;
					cnt++;
					if(i > 0 && matrix[i-1][j] && !visit[i-1][j]) {matrix[i-1][j] = 1;visit[i-1][j]=true;}
					if(i+1 < m && matrix[i+1][j] && !visit[i+1][j]) {matrix[i+1][j] = 1;visit[i+1][j]=true;}
					if(j > 0 && matrix[i][j-1] && !visit[i][j-1]) {matrix[i][j-1] = 1;visit[i][j-1]=true;}
					if(j+1 < n && matrix[i][j+1] && !visit[i][j+1]) {matrix[i][j+1] = 1;visit[i][j+1]=true;}
				}
			}
		}
		num ++;
		while(cnt < m*n){
			for(int i = 0; i < m; i++){
				for(int j = 0; j < n; j++){
					if(matrix[i][j] == num && visit[i][j]){
						cnt++;
						if(i > 0 && matrix[i-1][j] && !visit[i-1][j]) {matrix[i-1][j] = num+1;visit[i-1][j]=true;}
						if(i+1 < m && matrix[i+1][j] && !visit[i+1][j]) {matrix[i+1][j] = num+1;visit[i+1][j]=true;}
						if(j > 0 && matrix[i][j-1] && !visit[i][j-1]) {matrix[i][j-1] = num+1;visit[i][j-1]=true;}
						if(j+1 < n && matrix[i][j+1] && !visit[i][j+1]) {matrix[i][j+1] = num+1;visit[i][j+1]=true;}
					}
				}
			}
			num++;
		}
		return matrix;
    }
};

int main(){
	Solution s;
	vector<vector<int>> a = {{1, 0, 1, 1, 0, 0, 1, 0, 0, 1}, {0, 1, 1, 0, 1, 0, 1, 0, 1, 1}, {0, 0, 1, 0, 1, 0, 0, 1, 0, 0}, {1, 0, 1, 0, 1, 1, 1, 1, 1, 1}, {0, 1, 0, 1, 1, 0, 0, 0, 0, 1}, {0, 0, 1, 0, 1, 1, 1, 0, 1, 0}, {0, 1, 0, 1, 0, 1, 0, 0, 1, 1}, {1, 0, 0, 0, 1, 1, 1, 1, 0, 1}, {1, 1, 1, 1, 1, 1, 1, 0, 1, 0}, {1, 1, 1, 1, 0, 1, 0, 0, 1, 1}};
	cout << " a " << endl;
	for(auto item : a){
		for(auto it : item){
			cout << it << ' ';
		}
		cout << endl;
	}
	for(auto item : s.updateMatrix(a)){
		for(auto it : item){
			cout << it << ' ';
		}
		cout << endl;
	}
	return 0;
}
