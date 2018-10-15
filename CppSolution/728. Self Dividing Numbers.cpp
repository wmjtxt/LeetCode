 ///
 /// @file    :728. Self Dividing Numbers.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-28 11:26:45
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
		vector<int> res;
        for(int i = left; i <= right; i++){
			if(isSDN(i))
				res.push_back(i);
		}
		return res;
    }
	bool isSDN(int n){
		if(n < 10) return true;
		if(n % 10 == 0) return false;
		int nn = n;
		while(nn > 0){
			int num = nn%10;
			if(num == 0 || n%num != 0) return false;
			nn = nn / 10;
		}
		return true;
	}
};

int main(){
	
	return 0;
}
