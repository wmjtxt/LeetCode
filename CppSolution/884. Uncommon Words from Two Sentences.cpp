 ///
 /// @file    :884. Uncommon Words from Two Sentences.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-25 10:31:30
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        int m = A.size(), n = B.size();
		unordered_map<string,int> cnt;
		string tmp = "";
		for(int i = 0; i < m; i++){
			if(A[i] == ' '){
				cnt[tmp]++;
				tmp = "";
			}
			else{
				tmp += A[i];
			}
		}
		cnt[tmp]++;
		tmp = "";
		for(int i = 0; i < n; i++){
			if(B[i] == ' '){
				cnt[tmp]++;
				tmp = "";
			}
			else{
				tmp += B[i];
			}
		}
		cnt[tmp]++;
		vector<string> res;
		for(auto it : cnt){
			cout << it.first << "-" << it.second << endl;
			if(it.second == 1)
				res.push_back(it.first);
		}
		return res;
    }
};

int main(){
	Solution s;
	string a,b;
	getline(cin,a);
	getline(cin,b);
	for(auto itm : s.uncommonFromSentences(a,b))
		cout << itm << " ";
	return 0;
}
