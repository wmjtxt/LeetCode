 ///
 /// @file    :1. Two Sum_On.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-23 15:07:17(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i = 0; i < nums.size(); ++i){
            if(m.find(nums[i] != m.end())){
                return {m[nums[i]], i};
            }else{
                m[target - nums[i]] = i;
            }
        }
        return {};
    }
};

int main(){
	
	return 0;
}
