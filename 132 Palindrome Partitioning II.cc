 ///
 /// @file    :132 Palindrome Partitioning II.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-22 22:45:53(NewYork time)
 /// @quote   :
 ///
/*
题目描述：
132. Palindrome Partitioning II
Given a string s, partition s such that every substring of the partition is a palindrome.

Return the minimum cuts needed for a palindrome partitioning of s.

Example:

Input: "aab"
Output: 1
Explanation: The palindrome partitioning ["aa","b"] could be produced using 1 cut.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution{
public:
	int minCut(string s){
		vector<int> dp(s.length());
		for(int i = 0; i < s.length(); i++){
			dp[i] = isPalindrome(s.substr(0,i+1)) ? 0 : i;
			if(dp[i] == 0)
				continue;
			for(int j = 1; j <= i; j++){
				if(isPalindrome(s.substr(j,i+1-j)))
					dp[i] = min(dp[i], dp[j-1]+1);
				else
					dp[i] = min(dp[i], dp[j-1]+i+1-j);
			}
		}
		for(auto item : dp)
			cout <<"-"<< item << endl;
		return dp[dp.size()-1];
	}
	bool isPalindrome(string s){
		for(int i = 0; i < s.length() / 2; i++){
			if(s[i] != s[s.length()-i-1])
				return false;
		}
		return true;
	}
};


int main(){
	Solution s;
	string str;
	cin >> str;
	cout << s.minCut(str) << endl;
	return 0;
}
