// 47permutations_II.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
//next_permutation() 返回下一个排列，注意是下一个，所以排序一下就可以产生所有的排列。
using namespace std;
class Solution {
public:
	vector<vector<int>> permute(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		vector<vector<int>> perm;
		perm.push_back(nums);
		while (next_permutation(nums.begin(), nums.end()))
		{
			perm.push_back(nums);
		}

		return perm;
	}
};

int main() {
	vector<int> nums = { 2,2,1,1 };
	vector<vector<int>> perm;
	Solution solution;
	perm = solution.permute(nums);
	for each (vector<int> var in perm)
	{
		for each (int i in var)
		{
			cout << i << " ";
		}
		cout << endl;
	}

}
