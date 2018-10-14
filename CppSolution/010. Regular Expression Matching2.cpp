 ///
 /// @file    :010. Regular Expression Matching_dp.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-11 16:08:12(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.length(), n = p.length(); 
        vector<vector<bool> > dp(m + 1, vector<bool> (n + 1, false));
        dp[0][0] = true;
        for (int i = 0; i <= m; i++)
            for (int j = 1; j <= n; j++)
                if (p[j - 1] == '*')
                    dp[i][j] = dp[i][j - 2] || (i > 0 && (s[i - 1] == p[j - 2] || p[j - 2] == '.') && dp[i - 1][j]);
                else dp[i][j] = i > 0 && dp[i - 1][j - 1] && (s[i - 1] == p[j - 1] || p[j - 1] == '.');
        return dp[m][n];
    }
};

int main(){
	Solution solution;
	string s, p;
	while(cin >> s >> p){
		if(solution.isMatch(s,p))
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
	return 0;
}
