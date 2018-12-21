 ///
 /// @file    :028. Implement strStr().cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-21 14:19:25(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack == needle) return 0;
        int m = haystack.size(), n = needle.size(), res = -1;
        for(int i = 0; i < m; i++){
            if(haystack[i] == needle[0]){
                int tmp = i, j = 0;
                for(; j < n; tmp++,j++){
                    if(haystack[tmp] != needle[j])
                        break;
                }
                if(j == n)
                    res = i;
            }
        }
        return res;
    }
};

int main(){
	
	return 0;
}
