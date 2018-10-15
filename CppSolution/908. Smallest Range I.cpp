 ///
 /// @file    :908. Smallest Range I.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-08 16:44:19(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
	int smallestRangeI(vector<int>& A, int K){
		sort(A.begin(), A.end());
		int maxn, minn;
		maxn = *(A.end()-1)-K;
		minn = *(A.begin())+K;
		if(maxn <= minn) return 0;
		else return maxn-minn;
	}
};

int main(){
	
	return 0;
}
