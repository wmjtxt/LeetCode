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
        stack<char> st;
        for(char c : s){
            if(c == '('|| c == '{' || c == '['){
                st.push(c);
            }else{
                if(st.empty()) return false;
                if(c == ')' && st.top() != '(') return false;
                if(c == '}' && st.top() != '{') return false;
                if(c == ']' && st.top() != '[') return false;
                st.pop();
            }
        }
        return st.empty();
    }
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
