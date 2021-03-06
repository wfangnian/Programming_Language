// 771jewels_and_stones.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	int numJewelsInStones(string J, string S) {
		int ans = 0;
		for (size_t i = 0; i < J.length(); i++)
			if (S.find(J[i])>=0)
			{
				size_t pos = S.find(J[i]);
				for (size_t j = pos; j < S.length(); j++)
					if (J[i]==S[j])
						ans++;
			}
		return ans;
	}
};

int main()
{
	//string s1 = "aA", s2 = "aAAbbbb";
	string s1 = "z", s2 = "ZZ";
	//cout << s2.find(s1);
	Solution solution;
	int ans = solution.numJewelsInStones(s1, s2);
	cout << ans;
    return 0;
}

