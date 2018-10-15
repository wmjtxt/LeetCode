#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> res;
	int i, j;
	for(i = 0; i < words.size(); i++){
		map<char,char> p, w;
		for(j = 0; j < words[i].size(); j++){
			auto pp = p.find(pattern[j]);
			auto ww = w.find(words[i][j]);
			if(pp == p.end()){
				p[pattern[j]] = words[i][j];
			} else {
				if(pp->second != words[i][j]){
					break;
				}
			}
			if(ww == w.end()){
				w[words[i][j]] = pattern[j];
			} else {
				if(ww->second != pattern[j]){
					break;
				}
			}
		}
		if(j == words[i].size())
			res.push_back(words[i]);
	}
        return res;
    }
};

int main()
{
	vector<string> words = {"abc","deq","mee","aqq","dkd","ccc"}, res;
	string pattern = "abb";
	Solution solution;
	res = solution.findAndReplacePattern(words, pattern);
	for(auto item : res){
		cout << item << " ";
	}
	cout << endl;
	return 0;
}
