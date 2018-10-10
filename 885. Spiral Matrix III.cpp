 ///
 /// @file    :885. Spiral Matrix III.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-10 20:03:25(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <unistd.h>
using namespace std;

class Solution{
public:
	vector<vector<int>> spiralMatrixIII(int R, int C, int r0, int c0){
		//11223344
		//right, down, left, left, up, up, right, right, right
		vector<vector<int>> res;
		int i = r0, j = c0, k = 0, t = 0, n = R * C, flag = 0, m = 1;
		while(k < n){
			int mm = m;
			while(mm != 0){
				if(i >= 0 && i < R && j >= 0 && j < C){
					vector<int> tmp(2);
					//cout << "(" << i << "," << j << ")" << endl;
					tmp[0] = i;
					tmp[1] = j;
					res.push_back(tmp);
					++k;
				}
				//cout << "[" << i << "," << j << "]" << endl;
				if(flag == 0) j++;
				if(flag == 1) i++;
				if(flag == 2) j--;
				if(flag == 3) i--;
				mm--;
				//sleep(3);
			}
			flag++;
			flag = flag%4;
			t++;
			if(t%2 == 0) m++;
		}
		return res;
	}
};

int main(){
	Solution s;
	vector<vector<int>> a;
	a = s.spiralMatrixIII(1,4,0,0);
	for(int i = 0; i < a.size(); i++){
		cout << a[i][0] << a[i][1] << endl;
	}
	return 0;
}
