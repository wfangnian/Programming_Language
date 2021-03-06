// 33search_in_rotated_sorted_array.cpp: 定义控制台应用程序的入口点。
//

/*

Suppose an array sorted in ascending order is rotated at some
pivot unknown to you beforehand.
(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).
You are given a target value to search. If found in the 
array return its index, otherwise return -1.

*/

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int search(vector<int>& nums, int target) {
		if (nums.size() == 0)return -1;
		for (size_t i = 0; i < nums.size(); i++)
		{
			if (target == nums[i])
			{
				return i;
			}
			if (target == nums[nums.size()-1-i])
			{
				return nums.size() - 1 - i;
			}
			if (2*i>nums.size())
			{
				break;
			}
		}
		return -1;
	}
};

int main()
{
	Solution s;
	vector<int> nums = { 0,1,2,4,5,6,7 };
	cout<<s.search(nums, 6);
    return 0;
}

