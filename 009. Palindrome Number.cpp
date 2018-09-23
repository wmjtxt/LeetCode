 ///
 /// @file    :9. Palindrome Number.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-12 21:05:34(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <string>
using namespace std;

class Solution{
public:
	bool isPalindrome(int x){
		if(x < 0) return false;
		if(x == 0) return true;
		string str = to_string(x);
		for(int i = 0; i < str.size()/2; i++){
			if(str[i] != str[str.size()-i-1]){
				return false;
			}
		}
		return true;
	}
};


int main(){
	Solution s;
	int num;
	while(cin >> num){
		if(s.isPalindrome(num)){
			cout << "true" << endl;
		}
		else cout << "false" << endl;
	}
	return 0;
}
