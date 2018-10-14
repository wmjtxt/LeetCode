 ///
 /// @file    :806. Number of Lines To Write String.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-14 13:32:23
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
		int lineNum = 0, tmp = 0;
		for(int i = 0; i < S.size(); i++){
			if(tmp + widths[S[i]-'a'] <= 100){
				tmp += widths[S[i]-'a'];
			}
			else{
				lineNum++;
				tmp = widths[S[i]-'a'];
			}
		}
		lineNum++;
		//vector<int> res;
		//res.push_back(lineNum);
		//res.push_back(tmp);
		return vector<int>{lineNum,tmp};
    }
};

int main(){
	
	return 0;
}
