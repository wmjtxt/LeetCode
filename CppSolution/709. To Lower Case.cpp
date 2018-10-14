 ///
 /// @file    :709. To Lower Case.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-12 20:51:18(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution{
public:
	string toLowerCase(string str){
		for(int i = 0; i < str.size(); i++){
			if(str[i] >= 'A' && str[i] <= 'Z'){
				str[i] = str[i] - 'A' + 'a';
			}
		}
		return str;
	}
};

int main(){
	Solution s;
	string str;
	while(cin >> str){
		cout << s.toLowerCase(str) << endl;
	}
	return 0;
}
