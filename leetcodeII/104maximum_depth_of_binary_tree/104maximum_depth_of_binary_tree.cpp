// 104maximum_depth_of_binary_tree.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
	int maxDepth(TreeNode* root) {
		int LD = 0, RD = 0;
		if (root == NULL)
			return 0;
		else
		{
			LD = maxDepth(root->left);
			RD = maxDepth(root->right);
			return (LD > RD ? LD : RD) + 1;
		}
	}
};
