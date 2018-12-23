 ///
 /// @file    :030. Substring with Concatenation of All Words.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-23 15:51:57
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        unordered_map<string,int> dict;
        int n        = s.size();
        int m        = words.size();
        if(n == 0 || m == 0) return res;
        int wordsize = words[0].size();
        for(int i = 0; i < m;i++) dict[words[i]]++;

        for(int i = 0; i < n; i++){
            unordered_map<string,int> v;
            int left = i;
            int j = i;
            int cnt = 0;
            while(j < n){
                string tmp = s.substr(j,wordsize);
                //cout << "tmp=" << tmp << endl;
                if(dict.count(tmp)){
                    v[tmp]++;
                    if(v[tmp] <= dict[tmp]){
                        cnt++;
                    }
                    else{
                        break;
                    }
                    if(cnt == m){
                        res.push_back(left);
                    }
                }
                else{
                    break;
                }
                j += wordsize;
            }
        }
        return res;
    }
};
int main(){
	
	return 0;
}
