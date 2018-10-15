 ///
 /// @file    :763. Partition Labels.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-30 11:43:43
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string S) {
        string part = "", tmp = "";
		int pi = 0;//partition index
		vector<int> res;
		while(pi < S.size()){
			part += S[pi];
			pi++;
			for(int i = pi; i < S.size(); i++){
				if(part.find(S[i]) == -1){
					tmp += S[i];
				}
				else{
					pi = i+1;
					tmp += S[i];
					part += tmp;
					tmp = "";
				}
			}
			cout << part << endl;
			res.push_back(part.size());
			part = "";
			tmp = "";
		}
		return res;
    }
};

int main(){
	Solution s;
	//string ss = "ababcbacadefegdehijhklij";
	string ss = "caedbdedda";
	cout << (int)ss.find('c') << endl;
	for(auto it : s.partitionLabels(ss))
		cout << it << " ";
	return 0;
}
