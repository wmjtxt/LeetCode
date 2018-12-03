 ///
 /// @file    :406. Queue Reconstruction by Height.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-03 19:25:30(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;
class Solution {
public:
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        vector<pair<int,int>> res;
        sort(people.begin(),people.end(),[](pair<int, int> a,pair<int, int> b){return a.second == b.second?a.first > b.first : a.second < b.second;});
        for(auto it : people){
            if(it.second == 0){
                res.insert(res.begin(),it);
                continue;
            }
            int cnt = 0;
            for(int j = 0; j < res.size(); j++){
                if(res[j].first >= it.first)
                    cnt++;
                if(cnt == it.second){
                    res.insert(res.begin()+j+1,it);
                    break;
                }
            }
        }
        return res;
    }
};
int main(){
	
	return 0;
}
