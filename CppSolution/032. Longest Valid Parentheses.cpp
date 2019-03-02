 ///
 /// @file    :032. Longest Valid Parentheses.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-29 11:22:40
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<char> st;
        int res = 0, tmp = 0, pre = 0;
        int flag = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                if(!st.empty() && flag){
                    pre = tmp;
                    tmp = 0;
                }
                else{
                    //tmp += pre;
                }
                flag++;
                st.push(s[i]);
            }
            if(s[i] == ')'){
                flag = 0;
                if(st.empty()){
                    tmp = 0;
                }
                else{
                    st.pop();
                    if(st.empty()){ 
                        tmp += pre;
                        pre = 0;
                    }
                    tmp+=2;
                    if(tmp > res) res = tmp;
                }
            }
        }
        return res;
    }
};
int main(){
	
	return 0;
}
