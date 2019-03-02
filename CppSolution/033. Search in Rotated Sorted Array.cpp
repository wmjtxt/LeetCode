 ///
 /// @file    :033. Search in Rotated Sorted Array.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2019-01-07 10:21:53(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0, hi = n-1;
        while(lo < hi){
            int mid = (lo+hi)/2;
            if(nums[mid] > nums[hi]) lo = mid + 1;
            else hi = mid;
        }
        int piv = lo;
        lo = 0;
        hi = n-1;
        while(lo <= hi){
            int mid = (lo+hi)/2;
            int realmid = (mid+piv)%n;
            if(nums[realmid] == target) return realmid;
            if(nums[realmid] > target) hi = mid - 1;
            else lo = mid + 1;
        }
        return -1;
    }
};

int main(){
	
	return 0;
}
