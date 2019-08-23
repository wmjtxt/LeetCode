 ///
 /// @file    :043. Mutiply Strings.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2019-04-19 19:20:14
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        string ans;
        int n = num1.size();
        int m = num2.size();
        if(n > m){
            ans = mmultiply(num1, num2);
        }
        else{
            ans = mmultiply(num2, num1);
        }
        return ans;
    }
    string mmultiply(string num1, string num2){
        //cout << num1 << num2 << endl;
        reverse(num2);
        string ans;
        for(int i = 0; i < num2.size(); ++i){
            ans = addStr(ans, realMultiply(num1, num2[i]-'0', i));
        }
        reverse(ans);
        int cnt = 0;
        for(int i = 0; i < ans.size(); ++i){
            if(ans[i] == '0' && i != ans.size()-1) ++cnt;
            else break;
        }
        //cout << cnt << endl;
        ans = ans.substr(cnt, ans.size()-cnt);
        return ans;
    }
    string realMultiply(string s, int k, int i){
        //cout << s <<","<< k << endl;
        string ans = "";
        reverse(s);
        while(i > 0){
            ans += "0";
            --i;
        }
        int n = s.size();
        int j = 0, num = 0, c = 0;
        while(j != n){
            num = (s[j] - '0') * k + c;
            ans += num%10 + '0';
            c = num/10;
            ++j;
        }
        if(c != 0){
            ans += c + '0';
        }
        //cout << "ans = " << ans << endl;
        return ans;
    }
    string addStr(string s1, string s2){
        string ans = "";
        int n = s1.size(), m = s2.size();
        int i = 0, j = 0, c = 0, num = 0;
        while(i != n && j != m){
            num = s1[i] - '0' + s2[j] - '0' + c;
            ans += num%10 + '0';
            c = num/10;
            ++i;
            ++j;
        }
        while(i != n){
            num = s1[i] - '0' + c;
            ans += num%10 + '0';
            c = num/10;
            ++i;
        }
        while(j != m){
            num = s2[j] - '0' + c;
            ans += num%10 + '0';
            c = num/10;
            ++j;
        }
        if(c != 0){
            ans += c + '0';
        }
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
    string s1,s2;
    while(cin >> s1 >> s2){
        cout << s.multiply(s1,s2) << endl;
    }
	return 0;
}
