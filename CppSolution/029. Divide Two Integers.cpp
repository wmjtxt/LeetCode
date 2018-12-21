 ///
 /// @file    :029. Divide Two Integers.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-21 14:43:26(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(!divisor || (dividend == INT_MIN && divisor == -1))
            return INT_MAX;
        int sign = (dividend < 0) ^ (divisor < 0);
        int res = 0;
        long long dd = labs(dividend);
        long long ds = labs(divisor);
        while(ds <= dd){
            long long tmp = ds, n = 1;
            while(tmp < dd){
                tmp <<= 1;
                n <<= 1;
            }
            dd -= tmp;
            res += n;
        }
        if(sign) res = -res;
        return res;
    }
};
int main(){
	
	return 0;
}
