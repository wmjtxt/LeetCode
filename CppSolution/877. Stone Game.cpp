 ///
 /// @file    :877. Stone Game.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-12 19:48:59
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int alex, lee;
		int i = 0, j = piles.size()-1;
		int flag = 0;
		int tmp;
		while(i <= j){
			if(piles[i] >= piles[j]){
				tmp = piles[i];
				i++;
			}
			else{
				tmp = piles[j];
				j--;
			}
			if(flag == 0){
				alex += tmp;
				flag = 1;
			}
			else{
				lee += tmp;
				flag = 0;
			}
		}
		if(alex > lee)
			return true;
		else 
			return false;
    }
};

int main(){
	
	return 0;
}
