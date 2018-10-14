 ///
 /// @file    :413. Arithmetic Slices.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-14 14:16:36
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
		if(A.size() < 3) return 0;
        int cnt = 0;
		vector<int> dp(A.size()+1,0);
		dp[3] = 1;
		for(int i = 4; i < dp.size(); i++){
			dp[i] = dp[i-1] + i - 2;
		}
		int tmp = 2;
		for(int i = 1; i < A.size()-1; i++){
			if(A[i+1]-A[i] == A[i]-A[i-1]){
				tmp++;
			}
			else if(tmp>=3){
				cnt += dp[tmp];
				tmp = 2;
			}
		}
		if(tmp>=3){
			cnt += dp[tmp];
		}
		return cnt;
    }
};

int main(){
	
	return 0;
}
