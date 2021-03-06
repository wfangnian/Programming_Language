// 788rotated_digits.cpp: 定义控制台应用程序的入口点。
//
/*
X is a good number if after rotating each digit individually by 180 degrees,
we get a valid number that is different from X.  Each digit must be rotated 
- we cannot choose to leave it alone.

A number is valid if each digit remains a digit after rotation. 0, 1,
and 8 rotate to themselves; 2 and 5 rotate to each other; 6 and 9 rotate
to each other, and the rest of the numbers do not rotate to any 
other number and become invalid.

Now given a positive number N, how many numbers X from 1 to N are good?
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

class Solution {
public:
	int rotatedDigits(int N) {
		int count = 0;
		for (size_t i = 2; i <= N; i++)
			if (isInvalid(i))count++;
		//cout << count << endl;
		return count;

	}
	bool isInvalid(int x) {
		bool tmp = false;
		int s = x;
		while (x)
		{
			if (x % 10 == 3) return false;
			else if (x % 10 == 4)return false;
			else if (x % 10 == 7)return false;
			else if (x % 10 == 2)tmp = true;
			else if (x % 10 == 5)tmp = true;
			else if (x % 10 == 6)tmp = true;
			else if (x % 10 == 9)tmp = true;
			x /= 10;
		}
		if (tmp == true)cout << s << endl;
		return tmp;
	}
};
//#define SAME 0 // 0, 1, 8
//#define VALID 1 // 2, 6, 8, 9
//#define INVALID 2 // 3, 4, 7
//
//int rotatedDigits(int n) {
//	int i, num, count = 0, is_valid[] = { SAME, SAME, VALID, INVALID, INVALID, VALID, VALID, INVALID, SAME, VALID };
//	bool found = false;
//
//	for (i = 2; i <= n; i++) {
//		num = i; found = false;
//		while (num) {
//			if (is_valid[num % 10] == INVALID) { found = false; break; }
//			if (is_valid[num % 10] == VALID) found = true;
//			num = num / 10;
//		}
//		if (found == true) count++;
//	}
//
//	return count;
//}
int main()
{
	Solution s;
	s.rotatedDigits(200);
    return 0;
}

