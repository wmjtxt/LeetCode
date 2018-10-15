 ///
 /// @file    :557. Reverse Words in a String III.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-15 17:17:31(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
		int left = 0, i = 0;
		for(; i < s.size(); i++){
			if(s[i] == ' '){
				reverse(s,left,i-1);
				left = i+1;
			}
		}
		reverse(s,left,i-1);
		return s;
    }
	void reverse(string& s, int left, int right){
		for(int i = left; i < (right+left+1)/2; i++){
			char tmp = s[i];
			s[i] = s[right+left-i];
			s[right+left-i] = tmp;
		}
	}
};

int main(){
	Solution s;
	string str;
	getline(cin,str);
	cout << s.reverseWords(str) << endl;
	return 0;
}
