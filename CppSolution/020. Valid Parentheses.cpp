 ///
 /// @file    :020. Valid Parentheses.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-18 15:24:02(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <stack>
#include <map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> b;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                b.push(s[i]);
                cnt++;
            }
            if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
                cnt--;
                if(!b.empty() && s[i] == bs[b.top()]){
                    b.pop();
                }
            }
        }
        if(cnt == 0 && b.empty())
            return true;
        else
            return false;
    }
private:
    map<char,char> bs = {{'(',')'},{'[',']'},{'{','}'}};
};

int main(){
	Solution s;
    string str;
    cin >> str;
    if(s.isValid(str))
        cout << "true" << endl;
    else
        cout << "false" << endl;
	return 0;
}
