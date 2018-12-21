 ///
 /// @file    :026. Remove Duplicates from Sorted Array.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-21 13:27:31(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        int res = 0;
        for(int i = 0; i < len; i++){
            nums[res] = nums[i];
            res++;
            if(i+1 < len && nums[i] == nums[i+1]){
                res--;
            }
        }
        return res;
    }
};

int main(){
	
	return 0;
}
