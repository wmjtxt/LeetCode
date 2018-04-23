 ///
 /// @file    :135 Candy.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-22 21:12:46(NewYork time)
 /// @quote   :
 /// 
 //哈哈，原来动规也没那么难，从拿到题目一筹莫展，觉得无从下手，到用动规的思想把代码写全，再一一解决无法通过的例子，直到AC,这种感觉很爽！

/*
题目描述：
135.Candy

There are N children standing in a line. Each child is assigned a rating value.
You are giving candies to these children subjected to the following requirements:

Each child must have at least one candy.
Children with a higher rating get more candies than their neighbors.
What is the minimum candies you must give?

Example 1:

Input: [1,0,2]
Output: 5
Explanation: You can allocate to the first, second and third child with 2, 1, 2 candies respectively.
Example 2:

Input: [1,2,2]
Output: 4
Explanation: You can allocate to the first, second and third child with 1, 2, 1 candies respectively.
             The third child gets 1 candy because it satisfies the above two conditions.
*/
 
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	int candy(vector<int>& ratings){
		vector<int> dp(ratings.size());
		dp[0] = 1;//只有一个child时需要一个糖果
		for(int i = 1; i < ratings.size(); i++){
			if(ratings[i] > ratings[i-1])
				dp[i] = dp[i-1] + 1;
			else if(ratings[i] == ratings[i-1])
				dp[i] = 1;
			else{
				dp[i] = 1;
				if(dp[i-1] == dp[i])
					dp[i-1]++;
				for(int j = i - 1; j > 0; j--){
					if(ratings[j] < ratings[j-1] && dp[j] == dp[j-1])
						dp[j-1]++;
					else
						break;
				}
			}
		}
		int sum = 0;
		for(int i = 0; i < ratings.size(); i++){
			//cout << "-" << dp[i] << endl;
			sum += dp[i];
		}
		return sum;
	}
};

//测试
int main(){
	Solution s;
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(auto item : a)
		cout << item << endl;
	cout << s.candy(a) << endl;
	
	return 0;
}
