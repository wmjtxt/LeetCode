 ///
 /// @file    :344. Reverse String.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-17 21:08:26
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    string reverseString(string s) {
		int n = s.size();
		for(int i = 0; i < n/2; i++){
			char tmp = s[i];
			s[i] = s[n-i-1];
			s[n-i-1] = tmp;
		}
		return s;
    }
};

int main(){
	Solution s;
	string str;
	getline(cin,str);
	cout << s.reverseString(str) << endl;
	return 0;
}
