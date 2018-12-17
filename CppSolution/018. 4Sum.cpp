 ///
 /// @file    :018. 4Sum.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-17 17:32:47(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int> > res;
        set<vector<int>> s;
        for(int i = 0; i < n-3; i++){
            for(int j = i+1; j < n-2; j++){
                int low = j+1, high = n-1, sum = target-nums[i]-nums[j];
                while(low < high){
                    if(nums[low] + nums[high] == sum){
                        vector<int> tmp = {nums[i],nums[j],nums[low],nums[high]};
                        if(h.find(tmp) == h.end()){
                            res.push_back(tmp);
                            h.insert(tmp);
                        }
                        low++;
                        high--;
                    }
                    else if(nums[low]+nums[high]<sum) low++;
                    else high--;
                }
            }
        }
        return res;
    }
};

int main(){
	
	return 0;
}
