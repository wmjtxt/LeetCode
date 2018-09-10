 ///
 /// @file    :6. ZigZag Conversion.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-10 17:42:56(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        string strs[numRows];
        if(numRows <= 1) return s;
        int row = 0, step = 1;
        for(int i = 0 ; i < s.size(); i++){
            strs[row].push_back(s[i]);
            if(row == numRows - 1) step = -1;
            if(row == 0) step = 1;
            row += step;
        }
        string res = "";
        for(auto str : strs) res = res + str;
        return res;
    }
};

int main(){
	
	return 0;
}
