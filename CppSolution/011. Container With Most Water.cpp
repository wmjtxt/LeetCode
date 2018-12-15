 ///
 /// @file    :011. Container With Most Water.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-15 14:23:42(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;
		for(int i = 0; i < height.size(); i++){
			for(int j = i+1; j < height.size(); j++){
				int tmp = (j-i)*min(height[i],height[j]);
				if(tmp > res)
					res = tmp;
			}
		}
		return res;
    }
};

int main(){
	cout << "hello,world" << endl;
	return 0;
}
