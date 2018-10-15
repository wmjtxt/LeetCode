 ///
 /// @file    :419. Battleships in a Board.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-07 11:41:30
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int res = 0;
		for(int i = 0; i < board.size(); i++)
			for(int j = 0; j < board[0].size(); j++)
				if(board[i][j] == 'X'){
					++res;
					if(i > 0 && board[i-1][j] == 'X')
						--res;
					if(j > 0 && board[i][j-1] == 'X')
						--res;
				}
		return res;
    }
};

int main(){
	
	return 0;
}
