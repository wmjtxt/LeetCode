 ///
 /// @file    :8. String to Integer (atoi).cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-10 16:36:29(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <limits.h>
using namespace std;

class Solution{
public:
	int myAtoi(string str){
		int res = 0;
		int i = 0;
		int flag = 0; //符号,0代表正数,1代表负数
		int limitflag = 0;
		//去除开头的空格
		while(str[i] == ' ') i++;
		if(str[i] == '+') {
			i++;
		}
		else if(str[i] == '-') {
			flag = 1;
			i++;
		}
		if(str[i] < '0' || str[i] > '9') return res;
		while(str[i] >= '0' && str[i] <= '9'){
			//判断是否会越界,若越界,则跳出循环
			if(INT_MAX/10 < res || INT_MAX/10 == res && flag == 1 && str[i] >= '9' || INT_MAX/10 == res && flag == 0 && str[i] >= '8'){
				limitflag = 1;
				break;
			}
			res = res*10 + str[i] - '0';
			i++;
		}
		if(flag == 1) res = -res;
		if(limitflag){
			if(flag)
				res = INT_MIN;
			else 
				res = INT_MAX;
		}
		return res;
	}
};

int main(){
	string s;
	Solution so;
	while(cin >> s)
		cout << so.myAtoi(s) << endl;
	return 0;
}
