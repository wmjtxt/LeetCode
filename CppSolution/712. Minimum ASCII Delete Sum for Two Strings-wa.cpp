 ///
 /// @file    :712. Minimum ASCII Delete Sum for Two Strings.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-14 14:55:31
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
		int sum = 0, maxsum = 0;
		int sumall = 0;
		for(int i = 0; i < s1.size(); i++) sumall += s1[i];
		for(int i = 0; i < s2.size(); i++) sumall += s2[i];
        for(int i = 0; i < s1.size(); i++){
			if(s2.find(s1[i]) != -1){
				sum = 0;
				int j = i;
				string tmp = s2;
				while(j < s1.size()){
					if(tmp.find(s1[j]) != -1){
						sum += s1[j];
						if(tmp.find(s1[j])+1 < tmp.size()) tmp = tmp.substr(tmp.find(s1[j])+1);
						else break;
						cout << "tmp = " << tmp << endl;
					}
					j++;
				}
				//cout << "sum = " << sum << endl;
				if(maxsum < sum) maxsum = sum;
			}
		}
		return sumall-2*maxsum;
    }
};

int main(){
	Solution so;
	string s1,s2;
	cin >> s1 >> s2;
	cout << so.minimumDeleteSum(s1,s2) << endl;
	return 0;
}
