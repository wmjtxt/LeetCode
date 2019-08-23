 ///
 /// @file    :415. Add Strings.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2019-04-19 20:40:44
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    string addStrings(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        int c = 0, num = 0;
        string ans = "";
        while(0 != n && 0 != m){
            num = s1[n-1] - '0' + s2[m-1] - '0' + c;
            ans += num%10 + '0';
            c = num/10;
            //cout << num << "," << ans <<"," << c << endl;
            --n;
            --m;
        }
        while(0 != n){
            num = s1[n-1] - '0' + c;
            ans += num%10 + '0';
            c = num/10;
            --n;
        }
        while(0 != m){
            num = s2[m-1] - '0' + c;
            ans += num%10 + '0';
            c = num/10;
            --m;
        }
        if(c != 0){
            ans += c + '0';
        }
        reverse(ans);
        return ans;
    }
    void reverse(string& s){
        int n = s.size();
        for(int i = 0; i < n/2; ++i){
            char c = s[i];
            s[i] = s[n-i-1];
            s[n-i-1] = c;
        }
    }
};

int main(){
	Solution s;
    string s1, s2;
    while(cin >> s1 >> s2) cout << s.addStrings(s1,s2) << endl;
	return 0;
}
