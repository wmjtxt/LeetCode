 ///
 /// @file    :657. Robot Return to Origin.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-20 13:57:45(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution{
public:
	bool judgeCircle(string moves){
		bool res = false;
		int row = 0, col = 0;
		for(int i = 0; i < moves.size(); i++){
			if(moves[i] == 'L') row--;
			if(moves[i] == 'R') row++;
			if(moves[i] == 'U') col++;
			if(moves[i] == 'D') col--;
		} 
		if(row == 0 && col == 0)
			res = true;
		return res;
	}
};


int main(){
	
	return 0;
}
