 ///
 /// @file    :027. Remove Element.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-21 14:05:31(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        int res = 0;
        for(int i = 0; i < len; i++){
            nums[res] = nums[i];
            res++;
            nums[i] == val && res--;
        }
        return res;
    }
};

int main(){
	
	return 0;
}
