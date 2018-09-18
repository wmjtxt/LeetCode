 ///
 /// @file    :804. Unique Morse Code Words.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-18 10:50:27(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	int uniqueMorseRepresentations(vector<string> &words){
		int res = 0;
		vector<string> morsecode(words.size(),"");
		//先求摩尔斯码
		for(int i = 0; i < words.size(); i++){
			for(int j = 0; j < words[i].size(); j++){
				morsecode[i] += morse[words[i][j]-'a'];
			}
		}
		//再求不重复个数
		res = morsecode.size();
		for(int i = 0; i < morsecode.size(); i++){
			for(int j = i+1; j < morsecode.size(); j++){
				if(morsecode[j] == "") continue;
				if(morsecode[i] == morsecode[j]){
					res--;
					morsecode[j] = "";//将重复的位置置空
				}
			}
		}
		return res;
	}
private:
	vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
};

int main(){
	Solution solution;
	vector<string> word = {"gin", "zen", "gig", "msg"};
	cout << solution.uniqueMorseRepresentations(word) << endl;
	return 0;
}
