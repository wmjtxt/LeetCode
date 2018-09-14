 ///
 /// @file    :535. Encode and Decode TinyURL.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-14 09:57:52(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
	//Encodes a URL to a shortened URL 
	string encode(string longUrl){
		urls.push_back(longUrl);
		return "http://tinyurl.com/" + to_string(urls.size()-1);
	}

	//Decodes a shortened URL to its original URL.
	string decode(string shortUrl){
		return urls[stoi(shortUrl.substr(19))];
	}
private:
	vector<string> urls;
};


int main(){
	string url;
	Solution s;
	while(cin >> url){
		cout << s.encode(url) << endl;
		cout << s.decode(s.encode(url)) << endl;
	}
	return 0;
}
