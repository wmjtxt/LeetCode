 ///
 /// @file    :013. Roman to Integer.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-15 22:52:11(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
		int n = s.size();
        int res = 0;
		int i = 0;
		while(s[i] == 'M'){
			res += 1000;
			i++;
		}
		if(i+1 < n && s[i] == 'C' && s[i+1] == 'M'){
			res += 900;
			i+=2;
		}
		if(s[i] == 'D'){
			res += 500;
			i++;
		}
		if(i+1 < n && s[i] == 'C' && s[i+1] == 'D'){
			res += 400;
			i+=2;
		}
		while(s[i] == 'C'){
			res += 100;
			i++;
		}
		if(i+1 < n && s[i] == 'X' && s[i+1] == 'C'){
			res += 90;
			i+=2;
		}
		if(s[i] == 'L'){
			res += 50;
			i++;
		}
		if(i+1 < n && s[i] == 'X' && s[i+1] == 'L'){
			res += 40;
			i+=2;
		}
		while(s[i] == 'X'){
			res += 10;
			i++;
		}
		if(i+1 < n && s[i] == 'I' && s[i+1] == 'X'){
			res += 9;
			i+=2;
		}
		if(s[i] == 'V'){
			res += 5;
			i++;
		}
		if(i+1 < n && s[i] == 'I' && s[i+1] == 'V'){
			res += 4;
			i+=2;
		}
		while(s[i] == 'I'){
			res += 1;
			i++;
		}
		return res;
    }
};

int main(){
	
	return 0;
}
