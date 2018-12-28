 ///
 /// @file    :031. Next Permutation.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-28 11:25:15
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i;
        for(i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                int j;
                for(j = n-1; j > i; j--){
                    if(nums[j] > nums[i]){
                        int tmp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = tmp;
                        break;
                    }
                }
                if(j == i) continue;
                else break;
            }
        }
        sort(nums.begin()+i+1,nums.end());
    }
};

int main(){
	
	return 0;
}
