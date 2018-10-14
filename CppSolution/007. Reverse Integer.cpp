 ///
 /// @file    :7. Reverse Integer.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-10 19:49:55(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <limits.h>
using namespace std;

class Solution{
public:
	int reverse(int x){
		int res = 0;
		int flag = 0;
		int limitflag = 0;
		if(x < 0){
			flag = 1;
			x = -x;
		}
		while(x > 0){
			int m = x % 10;
			x /= 10;
			if(INT_MAX/10 < res){ //判断是否越界
				limitflag = 1;
				break;
			}
			res = res * 10 + m;
		}
		if(limitflag)
			return 0;
		if(flag)
			res = -res;
		return res;
	}
};

int main(){
	Solution s;
	int n;
	while(cin >> n)
		cout << s.reverse(n) << endl;
	return 0;
}
