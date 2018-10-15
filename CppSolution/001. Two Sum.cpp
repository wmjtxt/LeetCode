 ///
 /// @file    :1. Two Sum.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-23 15:07:17(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(int i = 0; i < nums.size(); ++i){
            for(int j = i+1; j < nums.size(); ++j){
                if(nums[i] + nums[j] == target){
                    res.push_back(i);
                    res.push_back(j);
                    break;
                }
            }
            if(!res.empty())
                break;
        }
        return res;
    }
};

int main(){
	
	return 0;
}
