// 81search_in_rotated_sorted_array_II.cpp: 定义控制台应用程序的入口点。
//
//What if duplicates are allowed ?

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
class Solution {  // as the same as problem 33
public:
	int search(vector<int>& nums, int target) {
		if (nums.size() == 0)return false;
		for (size_t i = 0; i < nums.size(); i++)
		{
			if (target == nums[i])
				return true;
			if (target == nums[nums.size() - 1 - i])
				return true;
			if (2 * i>nums.size())
				break;
		}
		return false;
	}
};



int main()
{
    return 0;
}

