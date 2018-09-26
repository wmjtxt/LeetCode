 ///
 /// @file    :162. Find Peak Element.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-26 10:13:15(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i;
		for(i = 0; i < nums.size()-1; i++){
			if(nums[i] > nums[i+1]){
				break;
			}
		}
		return i;
    }
};


int main(){
	
	return 0;
}
