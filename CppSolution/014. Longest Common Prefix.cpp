 ///
 /// @file    :014. Longest Common Prefix.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-15 23:36:08(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        int n = strs.size();
        if(n == 0) return res;
        if(n == 1) return strs[0];
        int i = 0;
        int flag = 1;
        while(1){
            char c = strs[0][i];
            for(int j = 1; j < strs.size(); j++){
                if(strs[j][i] != c)
                    flag = 0;
            }
            if(flag)
                res += c;
            else break;
            i++;
        }
        return res;
    }
};

int main(){
	
	return 0;
}
