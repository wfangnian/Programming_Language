// 287find_the_duplicate_number.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

/*
Given an array nums containing n + 1 integers where each integer is 
between 1 and n (inclusive), prove that at least one duplicate number 
must exist. Assume that there is only one duplicate number, find the duplicate one.
*/
#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int findDuplicate(vector<int>& nums) {
		vector<int> mark(nums.size());

		for (size_t i = 0; i < mark.size(); i++)
			mark[nums[i] - 1]++;

		for (size_t i = 0; i < mark.size(); i++)
			if (mark[i] >= 2)
				return i + 1;

		return 0;
	}
};
int main()
{
	vector<int>nums{ 2,2,2,2,2,2 };
	Solution s;
	s.findDuplicate(nums);
	std::cout << "Hello World!\n";
}