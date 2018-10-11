 ///
 /// @file    :010. Regular Expression Matching.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-07 13:57:07
 /// @quote   :
 ///
 
#include <iostream>
//#include <stri
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int i = 0, j = 0;
		int cnt = 1;
		while(i < s.size() && j < p.size()){
			if(p[j] == '*'){
				if(j == 0){
					j++;
					continue;
				}
				if(s[i] == p[j-1] || p[j-1] == '.'){
					i++;
					cnt++;
					//j++;
				}
				else{
					j++;
					while(cnt > 0 && p[j] == s[i-1]){
						j++;
						cnt--;
					}
				}
			}
			else if(p[j] == '.' || s[i] == p[j]){
				i++;
				j++;
			}
			else if(p[j+1] == '*'){
				j+=2;
			}
			else
				return false;
		}
		if(i < s.size())
			return false;
		if(j < p.size()){
			if(p[j] == '*') cnt++;
			if(cnt > 1) j++;
			while(p[j+1] == '*') j+=2;
			while(p[j] == '*') j++;
			if(j >= p.size()) return true;
			if(cnt == 1) return false;
			cnt--;
			while(i > 0 && cnt > 0 && (p[j] == s[i-1] || p[j] == '.')){
				i--;
				cnt--;
			}
			while(p[j+1] == '*') j+=2;
			while(p[j] == '*') j++;
			if(j < p.size())
				return false;
		}
		return true;
    }
};

int main(){
	Solution solution;
	string s, p;
	while(cin >> s >> p){
		if(solution.isMatch(s,p))
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
	return 0;
}
