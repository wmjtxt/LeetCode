 ///
 /// @file    :540. Single Element in a Sorted Array.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-05 10:50:25
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;
//不可思议，这题居然做出来了。
//这题一看很简单，但Note里要求Your solution should run in O(log n) time and O(1) space.
//马上想到二分查找,但一开始不知道怎么查找，后来才想到，花十来分钟写出来还真过了。
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
		int n = nums.size();
		int left = 0, mid = n/2, right = n-1;
		while(1){
			if(mid%2) mid = mid - 1;
			if(mid+1 < n && nums[mid] == nums[mid+1]){
				left = mid+2;
				mid = (left+right)/2;
			}
			else{
				if(mid == 0 || mid > 0 && nums[mid] != nums[mid-1])
					return nums[mid];
				else{
					right = mid-1;
					mid = (left+right)/2;
				}
			}
		}
    }
};

int main(){
	
	return 0;
}
