 ///
 /// @file    :712. Minimum ASCII Delete Sum for Two Strings.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-14 14:55:31
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
		int m = s1.size(), n = s2.size();
		vector<int> dp(n+1,0);
		for(int j = 1; j <= n; j++)
			dp[j] = dp[j-1]+s2[j-1];
		for(int i = 1; i <= m; i++){
			int t1 = dp[0];
			dp[0] += s1[i-1];
			for(int j = 1; j <= n; j++){
				int t2 = dp[j];
				dp[j] = s1[i-1] == s2[j-1]?t1:min(dp[j]+s1[i-1],dp[j-1]+s2[j-1]);
				t1 = t2;
			}
		}
		return dp[n];
    }
};

int main(){
	Solution so;
	string s1,s2;
	cin >> s1 >> s2;
	cout << so.minimumDeleteSum(s1,s2) << endl;
	return 0;
}
