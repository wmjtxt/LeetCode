 ///
 /// @file    :042. Trapping Rain Water.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-15 15:39:09(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int left=0; int right=height.size()-1;
        int res=0;
        int maxleft=0, maxright=0;
        while(left<=right){
            if(height[left]<=height[right]){
                if(height[left]>=maxleft) maxleft=height[left];
                else res+=maxleft-height[left];
                left++;
            }
            else{
                if(height[right]>=maxright) maxright= height[right];
                else res+=maxright-height[right];
                right--;
            }
        }
        return res;
    }
};

int main(){
	
	return 0;
}
