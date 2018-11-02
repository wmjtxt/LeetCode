 ///
 /// @file    :868. Binary Gap.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-01 20:57:17(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    int binaryGap(int N) {
        int res = 0;
		int i = 0;
		int p = N, oneCnt = 0, zeroCnt = 0, flag = 0;
		while(p > 0){
			if(p & 1){
				res = max(res,zeroCnt);
				zeroCnt = 0;
				oneCnt++;
				flag = 1;
			}
			else if(flag){
				zeroCnt++;
			}
			p >>= 1;
		}
		cout << oneCnt << "-" << zeroCnt << "-" << res << endl;
		if(oneCnt == 1) return 0;
		else return res + 1;
    }
};

int main(){
	Solution s;
	int n;
	cin >> n;
	cout << s.binaryGap(n) << endl;
	return 0;
}
