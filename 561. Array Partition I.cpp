 ///
 /// @file    :561. Array Partition I.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-29 15:21:01
 /// @quote   :
 ///

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
		int sum = 0;
		for(int i = 0; i < nums.size(); i++)
			if(i%2 == 0)
				sum += nums[i];
		return sum;
    }
}; 


int main(){
	
	return 0;
}
