 ///
 /// @file    :647. Palindromic Substrings.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-12 20:42:38
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countSubstrings(string s) {
		int n = s.size();
		vector<vector<int>> dp(n,vector<int>(n,0));
		//dp[i][j]表示第i个字符到第j个字符组成的字符串的结果
		for(int i = n-1; i >= 0; i--){
			for(int j = i; j < n; j++){
				if(i == j) dp[i][j] = 1;
				else dp[i][j] = dp[i][j-1] + dp[i+1][j] - dp[i+1][j-1] + isPalindromic(s.substr(i,j-i+1));
			}
		}
		//	for(int j = 0; i+j < n; j++){
		//		if(j == 0) dp[i][i+j] = 1;
		//		if(j == 1) dp[i][i+j] = dp[i][i+j-1] + dp[i+1][i+j] + isPalindromic(s.substr(i,j+1));
		//		if(j > 1) dp[i][i+j] = dp[i][i+j-1] + dp[i+1][i+j] - dp[i+1][i+j-1] + isPalindromic(s.substr(i,j+1));
		//	}
		return dp[0][n-1];
    }
	bool isPalindromic(string s){
		int n = s.size();
		for(int i = 0; i < n/2; i++){
			if(s[i] != s[n-i-1])
				return false;
		}
		return true;
	}
};

int main(){
	
	return 0;
}
