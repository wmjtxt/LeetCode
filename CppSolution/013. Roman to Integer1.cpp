 ///
 /// @file    :013. Roman to Integer1.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-15 22:52:11(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
		map<char,int> T = {{'I',1},
						   {'V',5},
						   {'X',10},
						   {'L',50},
						   {'C',100},
						   {'D',500},
						   {'M',1000}};
		int n = s.size();
        int res = T[s.back()];
		for(int i = n-2; i >= 0; --i){
			if(T[s[i]] < T[s[i+1]]){
				sum -= T[s[i]];
			}
			else{
				sum -= T[s[i]];
			}
		}
		return res;
    }
};

int main(){
	
	return 0;
}
