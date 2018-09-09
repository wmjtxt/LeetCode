 ///
 /// @file    :3. Longest Substring Without Repeating Characters.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-09 17:52:54(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	int lengthOfLongestSubstring(string s){
		vector<int> dict(256, -1);
		int maxlen = 0, start = -1;
		for(int i = 0; i != s.length(); i++){
			if(dict[s[i]] > start)
				start = dict[s[i]];
			dict[s[i]] = i;
			maxlen = max(maxlen, i - start);
		}
		return maxlen;
	}
};

int main(){
	
	return 0;
}
