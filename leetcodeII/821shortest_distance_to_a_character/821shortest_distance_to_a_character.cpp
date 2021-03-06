// 821shortest_distance_to_a_character.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

//#define m_min(a,b) return {a>b?b:a;}
/*
Input: S = "loveleetcode", C = 'e'
Output: [3, 2, 1, 0, 1, 0, 0, 1, 2, 2, 1, 0]
*/
using namespace std;

class Solution {
public:
	vector<int> shortestToChar(string S, char C) {

		if (S.find(C) == string::npos)
			return vector<int>(S.size(), S.size());
		vector<int> res;
		for (int i = 0; i < S.size(); i++)
		{
			int ans1 = 10001;
			int j = 0;
			while (true) {
				if (j + i<S.size())
					if (S[j + i] == C) {
						ans1 = j;
						break;
					}
				if (i - j >= 0 && res.size()>0)
					if (S[i - j] == C) {
						ans1 = j;
						break;
					}
				j++;
			}
			res.push_back(ans1);
		}
		return res;
	}
};

int main()
{
	string s = "baaa";
	char C = 'b';
	Solution sol;
	vector<int> ans;
	ans = sol.shortestToChar(s, C);
	for (auto n : ans)
		cout << n << " ";

	return 0;
}

