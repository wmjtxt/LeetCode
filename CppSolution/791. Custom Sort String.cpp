 ///
 /// @file    :791. Custom Sort String.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-26 16:20:53
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string customSortString(string S, string T) {
        vector<int> cnt(S.size(),0);
		string res = "";
		for(int i = 0; i < T.size(); i++){
			auto it = S.find(T[i]);
			if(it == -1) res += T[i];
			else cnt[it]++;
		}
		for(int i = 0; i < cnt.size(); i++){
			while(cnt[i]!=0){
				res += S[i];
				cnt[i]--;
			}
		}
		return res;
    }
};

int main(){
	
	return 0;
}
