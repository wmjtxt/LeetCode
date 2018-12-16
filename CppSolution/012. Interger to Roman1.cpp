 ///
 /// @file    :012. Interger to Roman1.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-15 22:42:05(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
		string M[4] = {"", "M", "MM", "MMM"};
    	string C[10] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    	string X[10] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    	string I[10] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    	return M[num/1000] + C[(num%1000)/100] + X[(num%100)/10] + I[num%10];        
    }
};

int main(){
	
	return 0;
}
