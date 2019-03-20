 ///
 /// @file    :1014. Capacity To Ship Packages Within D Days.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2019-03-17 13:24:51
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    void helper(int m, vector<int> & v, int d){
        int load = 0;
        int days = 0;
        for(int i = 0; i < v.size(); ++i){
            if(v[i] > m) return false;
            load += v[i];
            if(load > m){
                ++days;
                load = v[i];
            }
        }
        if(load > 0) ++days;
        if(days <= d) return true;
        return false;
    }
    int shipWithinDays(vector<int>& weights, int D) {
        int total = 0;
        for(auto ele : weights) total += weights[i];
        int l = 0, r = total;
        int ans = total;
        while(l <= r){
            int mid = (l + r) / 2;
            if(helper(mid, weights, D))
            {
                ans = min(ans, mid);
                r = mid - 1;
            }
            else l = mid + 1;
        }
        return ans;
    }
};

int main(){
	
	return 0;
}
