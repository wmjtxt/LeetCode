 ///
 /// @file    :893. Groups of Special-Equivalent Strings.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-22 09:56:24
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <set>
using namespace std;

//思路：
//定义res初值为A的长度,也就是字符串的个数
//定义一个数组表示该字符串是否valid,vector<int> v(A.size(),1)
//从A中的第一个字符串开始，依次与其后的字符串比较，是否为SpecialEquivalent
//如果是，res--,并使v[i] = 0,也就是不再参与比较
//需要辅助函数判断两个字符串是否为SpecialEquivGroups
class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        int res = A.size();
		vector<int> v(A.size(),1);
		for(int i = 0; i < A.size(); i++){
			for(int j = i+1; j < A.size(); j++){
				if(v[j] && isSpecialEquivGroup(A[i],A[j])){
					res--;
					v[j] = 0;
				}
			}
		}
		return res;
    }
	bool isSpecialEquivGroup(string a, string b){
		if(a.size() != b.size()) return false;
		int n = a.size();
		set<char> aOddSet, aEvenSet, bOddSet, bEvenSet;
		for(int i = 0; i < n; i++){
			if(i%2){
				aEvenSet.insert(a[i]);
				bEvenSet.insert(b[i]);
			}
			else{
				aOddSet.insert(a[i]);
				bOddSet.insert(b[i]);
			}
		}
		if(aOddSet == bOddSet && aEvenSet == bEvenSet)
			return true;
		else
			return false;
	}
};

int main(){
	
	return 0;
}
