// 848shifting_letters.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
	string shiftingLetters(string S, vector<int>& shifts) {
		vector<long long> add_shifts;
		int len = shifts.size();
		char alp[26] = { 'a','b','c','d','e','f','g',
			'h','i','j','k','l','m','n',
			'o','p','q','r','s','t','u',
			'v','w','x','y','z' };
		for (int i = len - 2; i >= 0; i--) 
			shifts[i] = (shifts[i] + shifts[i + 1])%26;
		for (size_t i = 0; i < len; i++)
			S[i] = alp[(S[i] - 'a' + shifts[i]) % 26];
		return S;
	}
};

int main() {
	string S = "bad";
	vector<int> shifts = { 10,20,30 };
	Solution s;
	s.shiftingLetters(S, shifts);
	//getchar();
	return 0;
}

