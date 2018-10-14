 ///
 /// @file    :861. Score After Flipping Matrix.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-25 15:07:41(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	int matrixScore(vector<vector<int> >& A){
		for(int i = 0; i < A.size(); i++){
			if(flipRow(A[i])){
				for(int j = 0; j < A[0].size(); j++){
					A[i][j] = (A[i][j] + 1) % 2;
				}
			}
		}
		for(int i = 0; i < A[0].size(); i++){
			if(flipCol(A, i)){
				for(int j = 0; j < A.size(); j++){
					A[j][i] = (A[j][i] + 1) % 2;
				}
			}
		}
		int cnt;
		for(int i = 0; i < A.size(); i++){
			cnt += scoreOfRow(A[i]);
		}
		return cnt;
	}
	//行只需判断第一个是否为1
	bool flipRow(vector<int> row){
		if(!row[0])
			return true;
		else 
			return false;
	}
	int scoreOfRow(vector<int> row){
		int score = 0, i = 0;
		while(i < row.size()){
			score = 2*score + row[i];
		}
		return score;
	}
	//列只需统计1的个数是否增加即可
	bool flipCol(vector<vector<int> > A, int j){
		int cnt = 0;
		for(int i = 0; i < A.size(); i++){
			if(A[i][j]) --cnt;
			else ++cnt;
		}
		if(cnt > 0)
			return true;
		else 
			return false;
	}
};


int main()
{
	
	return 0;
}
