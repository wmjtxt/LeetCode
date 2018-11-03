 ///
 /// @file    :412. Fizz Buzz.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-03 19:28:15(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
		vector<string> res;
		string f = "Fizz";
		string b = "Buzz";
		string fb = "FizzBuzz";
        for(int i = 1; i <= n; i++){
			if(i%3 == 0 && i%5)
				res.push_back("Fizz");
			else if(i%3 && i%5 == 0)
				res.push_back("Buzz");
			else if(i%3 == 0 && i%5 == 0)
				res.push_back("FizzBuzz");
			else
				res.push_back(to_string(i));
		}
		return res;
    }
};

int main(){
	
	return 0;
}
