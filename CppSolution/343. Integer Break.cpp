 ///
 /// @file    :343. Integer Break.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-17 21:28:09
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int integerBreak(int n) {
		vector<int> dp(n+1,0);
		dp[2] = 1;
		dp[3] = 2;
		dp[4] = 4;
		dp[5] = 6;
		for(int i = 6; i <= n; i++){
			dp[i] = dp[i-1];
			for(int j = 2; j < i-1; j++){
				int tmp = max(i-j,dp[i-j]);
				if(dp[i] < j*tmp)
					dp[i] = j*tmp;
			}
		}
		return dp[n];
    }
};

int main(){
	Solution s;
	int n;
	while(cin>>n)
		cout << s.integerBreak(n) << endl;
	return 0;
}
