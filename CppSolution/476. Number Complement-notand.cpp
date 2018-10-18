 ///
 /// @file    :476. Number Complement-&.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-18 10:41:20(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution{
	public:
		int findComplement(int num){
			int comp = 0, count = 0;
			while(num){
				if(!(num&1))
					comp += (1<<count);
				count++;
				num >>= 1;
			}
			return comp;
		}
};
int main(){
	Solution s;
	int n;
	while(cin >> n)
		cout << s.findComplement(n) << endl;
	return 0;
}
