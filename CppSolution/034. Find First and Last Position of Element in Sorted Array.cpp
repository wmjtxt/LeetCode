 ///
 /// @file    :034. Find First and Last Position of Element in Sorted Array.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2019-01-07 10:41:38(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ret(2, -1);
        int n = nums.size();
        if(n == 0) return ret;
        int lo = 0, hi = n-1;
        while(lo < hi){
            int mid = (lo+hi)/2;
            if(nums[mid] < target) lo = mid + 1;
            else hi = mid;
        }
        if(nums[lo] != target) return ret;
        else ret[0] = lo;
        hi = n-1;
        while(lo < hi){
            int mid = (lo + hi) /2 + 1;
            if(nums[mid] > target) hi = mid - 1;
            else lo = mid;
        }
        ret[1] = hi;
        return ret;
    }
};

int main(){
	
	return 0;
}
