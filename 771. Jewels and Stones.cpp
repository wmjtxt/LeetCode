 ///
 /// @file    :771. Jewels and Stones.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-11 09:35:09(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution{
public:
	int numJewelsInStones(string J, string S){
		int cnt = 0;
		for(int i = 0; i < S.size(); i++){
			for(int j = 0; j < J.size(); j++){
				if(S[i] == J[j]){
					cnt++;
					break;
				}
			}
		}
		return cnt;
	}
};

int main(){
	string jewels, stones;
	Solution s;
	while(cin >> jewels >> stones)
		cout << s.numJewelsInStones(jewels, stones) << endl;
	return 0;
}
