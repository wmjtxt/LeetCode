 ///
 /// @file    :442. Find All Duplicates in an Array.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-29 10:37:44
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
		for(int i = 0; i < nums.size(); i++){
			nums[abs(nums[i])-1] = -nums[abs(nums[i])-1];
			if(nums[abs(nums[i])-1] > 0) res.push_back(abs(nums[i]));
		}
		return res;
    }
};

int main(){
	Solution s;
	vector<int> a = {4,3,2,7,8,2,3,1};
	s.findDuplicates(a);
	return 0;
}
