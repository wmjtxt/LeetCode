 ///
 /// @file    :811. Subdomain Visit Count.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-20 14:34:27
 /// @quote   :
 /// 
#include <iostream>
#include <vector>
#include <unordered_map> 
using namespace std; 

class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
		unordered_map<string, int> tmp; 
		int n = cpdomains.size();
		for(int i = 0; i < n; i++){
			string cd = cpdomains[i];
			int count = 0;
			int j = 0;
			int m = cd.size();
			while(cd[j] != ' '){
				count = count*10 + cd[j] - '0';
				j++;
			}
			j++;
			tmp[cd.substr(j,m-j)] = count;
			while(j < m){
				if(cd[j] == '.'){
					string subdomain = cd.substr(j+1,m-j);
					//tmp[subdomain] = (tmp.find(subdomain)==tmp.end())?count:count+tmp[subdomain];
					tmp[subdomain] += count;
				}
				j++;
			}
		}
		vector<string> res;
		for(auto it : tmp){
			res.push_back(to_string(it.second) + " " + it.first);
		}
		return res;
    }
};

int main(){
	Solution s;
	int n;
	vector<string> strs={"900 com","9 www.baidu.com","90 xyz.com"};
	for(auto item : s.subdomainVisits(strs))
		cout << item << endl;
	return 0;
}
