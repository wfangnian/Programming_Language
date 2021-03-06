// 844backspace_string_compare.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
	bool backspaceCompare(string S, string T) {

		return ans(S) == ans(T);
	}
	string ans(string &s) {
		vector<char> res;
		for (size_t i = 0; i < s.size(); i++)
			if (s.at(i) == '#'&&res.size() != 0)
				res.pop_back();
			else if (s.at(i) == '#')
				;
			else
				res.push_back(s.at(i));
		s.assign(res.begin(), res.end());
		cout << s << endl;
		return s;
	}
};

int main()
{
	Solution s;
	cout << s.backspaceCompare("a##c", "#a#c") << endl;
	cout << s.backspaceCompare("a#c", "b") << endl;
	cout << s.backspaceCompare("", "") << endl;

    return 0;
}

