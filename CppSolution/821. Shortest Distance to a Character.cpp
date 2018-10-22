 ///
 /// @file    :821. Shortest Distance to a Character.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-21 21:24:21
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
		int n = S.size();
        vector<int> res(n,n);
		for(int i = 0; i < n; i++){
			if(S[i] == C)
				res[i] = 0;
			else if(i > 0)
				res[i] = res[i-1] + 1;
		}
		for(int i = n-1; i > 0; i--){
			if(res[i-1] - res[i] > 1){
				res[i-1] = res[i] + 1;
			}
		}
		return res;
    }
};

int main(){
	
	return 0;
}
