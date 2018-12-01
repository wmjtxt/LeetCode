 ///
 /// @file    :778. Swim in Rising Water.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-01 15:07:04
 /// @quote   :
 ///
 
#include <iostream>
#include <queue>
using namespace std;

//我想到了这个方法，bfs遍历，用最小堆存储，
//代码却是别人的...priority_queue实现，受教了
class Solution {
public:
	struct T{
		int t, x, y;
		T(int a, int b, int c) : t(a), x(b), y(c){}
		bool operator< (const T &d) const{return t > d.t;}
	};
    int swimInWater(vector<vector<int>>& grid) {
		int n = grid.size(), res = 0;
		priority_queue<T> pq;
		pq.push(T(grid[0][0],0,0));
		vector<vector<int>> visited(n,vector<int>(n,0));
		visited[0][0] = 1;
		static int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
		while(1){
			T p = pq.top();
			pq.pop();
			res = max(res,p.t);
			if(p.x == n-1 && p.y == n-1) return res;
			for(auto &d : dir){
				int i = p.x + d[0],j = p.y + d[1];
				if(i >= 0 && i < n && j >= 0 && j < n && !visited[i][j]){
					visited[i][j] = 1;
					pq.push(T(grid[i][j],i,j));
				}
			}
		}
    }
};

int main(){
	
	return 0;
}
