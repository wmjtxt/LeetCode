 ///
 /// @file    :476. Number Complement.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-18 10:04:42(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution{
public:
	int findComplement(int num){
		long long f = 1;
		while(num >= f){
			f <<= 1;
		}
		return f-1-num;
	}
};

int main(){
	Solution s;
	int n;
	while(cin >> n)
		cout << s.findComplement(n) << endl;
	return 0;
}
