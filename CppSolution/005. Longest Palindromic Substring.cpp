 ///
 /// @file    :5. Longest Palindromic Substring.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-10 10:49:58(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution{
public:
	string longestPalindrome(string s){
		if (s.empty()) return "";
		if (s.size() == 1) return s;
		int min_start = 0, max_len = 1;
		for (int i = 0; i < s.size();) {
			if (s.size() - i <= max_len / 2) break;
			int j = i, k = i;
			while (k < s.size()-1 && s[k+1] == s[k]) ++k; // Skip duplicate characters.
			i = k+1;
			while (k < s.size()-1 && j > 0 && s[k + 1] == s[j - 1]) { ++k; --j; } // Expand.
			int new_len = k - j + 1;
			if (new_len > max_len) { min_start = j; max_len = new_len; }
		}
		return s.substr(min_start, max_len);
	}
};

int main(){
	
	return 0;
}
