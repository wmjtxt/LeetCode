 ///
 /// @file    :682. Baseball Game.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-02 09:48:15
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& ops) {
        int sum = 0, score = 0;
		vector<int> r;
		for(string op : ops){
			if(op == "C"){
				sum -= r.back();
				r.pop_back();
				continue;
			}
			if(op == "D"){
				score = r.back()*2;
				sum += score;
			}
			else if(op == "+"){
				score = r[r.size()-1]+r[r.size()-2];
				sum += score;
			}
			else{
				score = stoi(op);
				sum += score;
			}
			r.push_back(score);
		}
		return sum;
    }
};

int main(){
	
	return 0;
}
