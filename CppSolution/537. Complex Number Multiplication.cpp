 ///
 /// @file    :537. Complex Number Multiplication.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-06 13:54:26
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    string complexNumberMultiply(string a, string b) {
       int ar, ai, br, bi, r, i;
	   string res;
	   a = a.substr(0,a.size()-1);
	   b = b.substr(0,b.size()-1);
	   ar = stoi(a.substr(0,a.find('+')));
	   ai = stoi(a.substr(a.find('+')+1));
	   br = stoi(b.substr(0,b.find('+')));
	   bi = stoi(b.substr(b.find('+')+1));
	   r = ar * br - ai * bi;
	   i = ai * br + ar * bi;
	   res = to_string(r) + "+" + to_string(i) + "i";
	   return res;
    }
};

int main(){
	Solution s;
	cout << s.complexNumberMultiply("2+3i","-4+-9i") << endl;
	return 0;
}
