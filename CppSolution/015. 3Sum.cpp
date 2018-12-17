 ///
 /// @file    :015. 3Sum.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-17 11:50:52(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> res;
        set<vector<int>> h;
        for(int i = 0; i < n-2; i++){
            int low = i+1, high = n-1, sum = 0-nums[i];
            while(low < high){
                if(nums[low] + nums[high] == sum){
                    vector<int> tmp = {nums[i],nums[low],nums[high]};
                    if(h.find(tmp) == h.end()){
                        res.push_back(tmp);
                        h.insert(tmp);
                    }
                    low++;
                    high--;
                }
                else if(nums[low]+nums[high] < sum) low++;
                else high--;
            }
        }
        return res;
    }
};

int main(){
	
	return 0;
}
