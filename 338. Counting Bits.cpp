 ///
 /// @file    :338. Counting Bits.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-09 09:46:13
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> countBits(int num) {
		vector<int> res;
		cout << sizeof(int) << endl;
		for(int i = 0; i <= num; i++){
			int cnt = 0;
			int ii = i;
			while(ii != 0){
				if(ii%2 == 1)
					++cnt;
				ii /= 2;
			}
			res.push_back(cnt);
		}
		return res;
    }
};

int main(){
	Solution solution;
	for(auto item : solution.countBits(5))
		cout << item << " ";
	cout << endl;
	return 0;
}
