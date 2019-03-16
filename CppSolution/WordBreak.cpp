 ///
 /// @file    :WordBreak.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2019-03-11 17:29:15
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution{
    bool wordBreak(string s, vector<string>& wordDict){
        set<string> dict;
        for(auto str : wordDict)
            dict.insert(str);
        int n = wordDict.size();
        vector<bool> dp(n+1, false);
        for(int i = 0; i < n; ++i){
            for(auto word : dict){
                int len = word.size();
                if(word == s.substr(i-len+1,len) && (dp[i-len] || i-len == -1))
                    dp[i] = true;
            }
        }
        return dp[n];
    }
}

int main(){
	
	return 0;
}
