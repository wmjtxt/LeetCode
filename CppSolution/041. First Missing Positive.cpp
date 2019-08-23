 ///
 /// @file    :041. First Missing Positive.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2019-04-18 08:46:28
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; ++i){
            while(nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i])
                swap(nums[i], nums[nums[i] - 1]);
        }
        for(int i = 0; i < n; ++i){
            if(nums[i] != i+1)
                return i+1;
        }
        return n+1;
    }
};

int main(){
	
	return 0;
}
