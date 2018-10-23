 ///
 /// @file    :500. Keyboard Row.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-23 09:35:52
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> res;
		map<char,int> alph{{'q',1},{'w',1},{'e',1},{'r',1},{'t',1},{'y',1},{'u',1},{'i',1},{'o',1},{'p',1},
			{'a',2},{'s',2},{'d',2},{'f',2},{'g',2},{'h',2},{'j',2},{'k',2},{'l',2},
			{'z',3},{'x',3},{'c',3},{'v',3},{'b',3},{'n',3},{'m',3},
			{'Q',1},{'W',1},{'E',1},{'R',1},{'T',1},{'Y',1},{'U',1},{'I',1},{'O',1},{'P',1},
			{'A',2},{'S',2},{'D',2},{'F',2},{'G',2},{'H',2},{'J',2},{'K',2},{'L',2},
			{'Z',3},{'X',3},{'C',3},{'V',3},{'B',3},{'N',3},{'M',3}};
		int row;
		for(int i = 0; i < words.size(); i++){
			if(words[i][0] >= 'A' && words[i][0] <= 'Z')
				words[i][0] += 'a' - 'A';
			row = alph[words[i][0]];
			int j = 1;
			for(;j < words[i].size(); j++){
				if(words[i][j] >= 'A' && words[j][0] <= 'Z')
					words[i][j] += 'a' - 'A';
				if(alph[words[i][j]] != row)
					break;
			}
			if(j == words[i].size())
				res.push_back(words[i]);
		}
		return res;
    }
};

int main(){
	
	return 0;
}
