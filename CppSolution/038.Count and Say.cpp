 ///
 /// @file    :038.Count and Say.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2019-03-05 19:31:43
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        if(n < 1) return "";
        if(n == 1) return "1";
        vector<string> dp(n+1);
        dp[0] = "";
        dp[1] = "1";
        for(int i = 2; i <= n; ++i){
            dp[i] = help(dp[i-1]);
            //cout << "dp[i] = " << dp[i] << endl;
        }
        return dp[n];
    }
    string help(const string &s){
        string res = "";
        int  cnt = 0;
        char tmp = s[0];
        //res += to_string(cnt) + tmp;
        //cout << "0 " <<  res << endl;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] != tmp){
                //cout << cnt << "," << tmp << endl;
                res += to_string(cnt) + tmp; 
                //cout << "res = " << res << endl;
                cnt = 1;
                tmp = s[i];
            }else{
                cnt++;
            }
        }
        res += to_string(cnt) + tmp;
        return res;
    }
};

int main(){
	Solution s;
    int n;
    while(cin >> n){
        cout << s.countAndSay(n) << endl;
    }
	return 0;
}
