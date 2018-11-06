 ///
 /// @file    :35. Search Insert Position.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-06 11:30:50
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
		int low = 0, mid = n/2, high = n-1;
		int res = -1;
		while(low <= high){
			if(nums[mid] > target){
				high = mid-1;
				mid = (low + high) / 2;
			}
			else if(nums[mid] < target){
				low = mid+1;
				mid = (low + high) / 2;
			}
			else{
				res = mid;
				break;
			}
		}
		if(res == -1)
			res = low;
		return res;
    }
};

int main(){
	
	return 0;
}
