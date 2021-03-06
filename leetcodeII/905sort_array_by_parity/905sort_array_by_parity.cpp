// 905sort_array_by_parity.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
Given an array A of non-negative integers, return an array consisting 
of all the even elements of A, followed by all the odd elements of A.

You may return any answer array that satisfies this condition.
*/

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
	vector<int> sortArrayByParity(vector<int>& A) {
		int i = 0, j = A.size() - 1;
		while (i < j)
		{
			if (A[i] % 2 == 0) {
				i++;
				continue;
			}
			if (A[j] % 2 != 0) {
				j--;
				continue;
			}
			A[i] = A[i] ^ A[j];// such as 
			A[j] = A[i] ^ A[j];// a=a+b,b=a-b a=a-b
			A[i] = A[i] ^ A[j];// 4=1+3 1=4-3 3=4-1

		}
		return A;
	}
};

int main()
{
	Solution s;
	vector<int> A = { 3,1,2,5,4 };
	s.sortArrayByParity(A);
	for (auto var : A)
		cout << var << " ";

	return 0;
}

