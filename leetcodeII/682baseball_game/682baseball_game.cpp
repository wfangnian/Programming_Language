// 682baseball_game.cpp: 定义控制台应用程序的入口点。
//
//we shoule obey the follows:
/*
1: Integer (one round's score): Directly represents the number of points you get in this round.
2: "+" (one round's score): Represents that the points you get in this round are the sum of the last two valid round's points.
3: "D" (one round's score): Represents that the points you get in this round are the doubled data of the last valid round's points.
4: "C" (an operation, which isn't a round's score): Represents the last valid round's points you get were invalid and should be removed.
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

class Solution {
public:
	int calPoints(vector<string>& ops) {
		vector<int> arrays;
		for (size_t i = 0; i < ops.size(); i++)
		{
			if (ops[i] == "+")
				arrays.push_back(arrays[arrays.size() - 1] + arrays[arrays.size() - 2]);
			else if (ops[i] == "D")
				arrays.push_back(arrays[arrays.size() - 1] * 2);
			else if (ops[i] == "C")
				arrays.pop_back();
			else
			{
				const char*s = ops[i].data();
				arrays.push_back(atoi(s));
			}
		}
		int sum = 0;
		for (size_t i = 0; i < arrays.size(); i++)
			sum += arrays[i];

		return sum;
	}
};

int main()
{
	vector<string> str;
	str = { "5","2","C","D","+" };
	str = { "5","-2","4","C","D","9","+","+" };

	Solution solution;
	cout << solution.calPoints(str) << endl;
	return 0;
}

