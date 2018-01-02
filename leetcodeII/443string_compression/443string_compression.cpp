// 443string_compression.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

class Solution {
public:
	int compress(vector<char>& chars) {
		int ans=1,old;
		vector<char> retval;
		set<char> arr;
		old = arr.size();
		for (size_t i = 0; i < chars.size(); i++)
		{
			arr.insert(chars[i]);
			if (arr.size() > old) {
				if (ans != 1) {
					string s = to_string(ans);
					for (size_t j = 0; j < s.size(); j++)
					{
						retval.push_back(s[j]);
					}
				}
				retval.push_back(chars[i]);
			}
			else {
				ans++;
			}
			old = arr.size();
			ans = 1;
		}
		if (ans != 1) {
			string s = to_string(ans);
			for (size_t j = 0; j < s.size(); j++)
			{
				retval.push_back(s[j]);
			}
		}
		for (size_t i = 0; i < retval.size(); i++)
			chars[i] = retval[i];
		return retval.size();
	}
};
int main()
{
	vector<char> c{ 'a','b','b','b','b','b','b','b','b','b','b','b','b' };
	vector<char> b{'a'};
	vector<char> a{ 'a','a','b','b','c','c','c' };
	//what if    a, a, a, b, b, a, a  : answer is a 3 b 2 a 2.
	Solution s;
	cout << s.compress(c) << endl;
	for each (char var in c)cout << var << " "; cout << endl;
	cout << s.compress(b) << endl;
	for each (char var in b)cout << var << " "; cout << endl;
	cout << s.compress(a) << endl;
	for each (char var in a)cout << var << " "; cout << endl;
    return 0;
}

