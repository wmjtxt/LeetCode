 ///
 /// @file    :852. Peak Index in a Mountain Array.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-26 10:04:37(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int i;
		for(i = 0; i < A.size()-1; i++){
			if(A[i] > A[i+1]){
				break;
			}
		}
		return i;
    }
};


int main(){
	
	return 0;
}
