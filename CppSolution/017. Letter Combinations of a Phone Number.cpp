 ///
 /// @file    :017. Letter Combinations of a Phone Number.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-18 13:51:46(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        int n = digits.size();
        if(n == 1){
            int size = mt[digits[0]-'0'].size();
            vector<string> tmp;
            for(int j = 0; j < size; j++){
                string str = "";
                str += mt[digits[0]-'0'][j];
                tmp.push_back(str);
            }
            return tmp;
        }
        for(int j = 0; j < mt[digits[0]-'0'].size(); j++){
            vector<string> v = letterCombinations(digits.substr(1,n-1));
            for(int k = 0; k < v.size(); k++){
                res.push_back(mt[digits[0]-'0'][j]+v[k]);
            }
        }
        return res;
    }
private:
    map<int, string> mt = {{2,"abc"},
                           {3,"def"},
                           {4,"ghi"},
                           {5,"jkl"},
                           {6,"mno"},
                           {7,"pqrs"},
                           {8,"tuv"},
                           {9,"wxyz"}};
};

int main(){
	
	return 0;
}
