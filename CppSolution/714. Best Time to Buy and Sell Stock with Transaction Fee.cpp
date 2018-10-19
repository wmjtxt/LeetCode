 ///
 /// @file    :714. Best Time to Buy and Sell Stock with Transaction Fee.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-19 10:15:54
 /// @quote   :
 ///
/*题意：
 *	给定一组整数代表一只股票每天的价格，一个非负数是交易费
 *	eg: prices = [1,3,2,8,4,9],fee=2 买卖一次算一次交易
 *	求可以获得的最大收益
 *	上面例子的结果是买1卖8买4卖9,((8-1)-2)+((9-4)-2) = 8
 *
 *思路：（摘自zestypanda大神）
 *  The solution maintains two states:
 *    s0 = profit having no stock
 *    s1 = profit having 1 stock
 *  The code iterates through the stock prices, and updates s0, s1 respectively. The run time is O(n).
 *  
 *  update s0 by selling the stock from s1, so s0 = max(s0, s1+p);
 *  update s1 by buying the stock from s0, so s1 = max(s1, s0-p-fee);
 */

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
		int s0 = 0, s1 = INT_MIN;
		for(int p : prices){
			int tmp = s0;
			s0 = max(s0,s1+p);
			s1 = max(s1,tmp-p-fee);
		}
		return s0;
	}
};

int main(){
	
	return 0;
}
