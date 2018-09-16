 ///
 /// @file    :905. Sort Array By Parity.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-16 16:31:06(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	vector<int> sortArrayByParity(vector<int>& A){
		vector<int> res;
		for(auto item : A)
			if(item % 2 == 0) 
				res.push_back(item);
		for(auto item : A)
			if(item % 2 == 1) 
				res.push_back(item);
		return res;
	}
};

int main(){
	vector<int> a, b;
	Solution solution;
	int n, num, i = 0;
	cin >> n;
	while(i < n && cin >> num){
		a.push_back(num);
		i++;
	}
	b = solution.sortArrayByParity(a);
	for(auto item : b)
		cout << item << " ";
	cout << endl;
	return 0;
}
