// 836rectangle_overlap.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>

/*
找出两个矩形是否重合；
输入是左下角和右上角的坐标；
*/
using namespace std;

//看了这个图片就懂了 https://4.bp.blogspot.com/-mT4r_iRPgEQ/WwxV5FPy1wI/AAAAAAAAQ-I/D8onBsdO-FwRwBpDi0LK2NjxCJ9eoFc9gCLcBGAs/s1600/rectangle_overlap.png
//rec2[0] >= rec1[2] or rec1[1] >= rec2[3] or rec1[0] >= rec2[2] or rec1[3] <= rec2[1]
class Solution {
public:
	bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
		if (rec2[0] >= rec1[2] ||
			rec1[1] >= rec2[3] ||
			rec1[0] >= rec2[2] ||
			rec1[3] <= rec2[1])
			return false;
		return true;
	}
};
int main()
{
	Solution s;
	vector<int>a{ 0, 0, 1, 1 };
	vector<int>b{ 1, 0, 2, 1 };
	cout << s.isRectangleOverlap(a, b);

    return 0;
}

