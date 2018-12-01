 ///
 /// @file    :739. Daily Temperatures.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-01 14:45:43
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        vector<int> res;
		for(int i = 0; i < T.size(); i++){
			int j;
			for(j = i+1; j < T.size(); j++){
				if(T[j] > T[i]){
					res.pushback(j-i);
					break;
				}
			}
			if(j == T.size())
				res.pushback(0);
		}
		return res;
    }
};

int main(){
	
	return 0;
}
