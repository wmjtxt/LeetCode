 ///
 /// @file    :016. 3Sum\ Closest.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-17 16:50:52(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int res = nums[0]+nums[1]+nums[n-1];
        for(int i = 0; i < n-2; i++){
            int low = i+1, high = n-1;
            while(low < high){
                int sum = nums[i]+nums[low]+nums[high];
                if(sum > target){
                    high--;
                }
                else
                    low++;
                if(abs(sum-target) < target(res-target))
                    res = sum;
            }
        }
        return res;
    }
};

int main(){
	
	return 0;
}
