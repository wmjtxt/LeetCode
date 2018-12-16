 ///
 /// @file    :012. Interger to Roman.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-15 21:45:57(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
	string helper(int& num, int n, string a, string b, string c){
		string res = "";
		if(num >= 9*n){
			res += a + c;
			num -= 9*n;
		}
		else{
			if(num >= 5*n){
				res += b;
				num -= 5*n;
			}
			else if(num >= 4*n){
				res += a + b;
				num -= 4*n;
			}
			while(num/n){
				res += a;
				num -= n;
			}
		}
		return res;
	}
    string intToRoman(int num) {
		string res = "";
		while(num/1000){
			res += "M";
			num -= 1000;
		}
		res += helper(num,100,"C","D","M");
		res += helper(num,10,"X","L","C");
		res += helper(num,1,"I","V","X");
		return res;
    }
};

int main(){
	
	return 0;
}
