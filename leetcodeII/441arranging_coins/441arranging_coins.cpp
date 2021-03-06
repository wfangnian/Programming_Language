// 441arranging_coins.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
/*
o			1
o o			3              5 2
o o o		6              8 3
o o o o		10
o o o o o	15
o o o o o o 21
*/
class Solution {
public:
	int arrangeCoins(int n) {
		long sum1{ 0 };
		for (size_t i = 1; ; i++){
			sum1 += i;
			if (sum1 > n){
				cout << i - 1 << endl;
				return i-1;
				break;
			}	
		}
		return 0;
	}
	
	int arrangeCoins2(int n) {
		auto s = (long long)n;
		auto sum(sqrtl(2 * s));
		cout <<(sum*(sum + 1) / 2 > n ? sum - 1 : sum) << " S2<-\n";
		return (sum*(sum + 1) / 2 > n ? sum - 1 : sum);
	}
	
	
};
/* python 
class Solution:
    def arrangeCoins(self, n):
        """
        :type n: int
        :rtype: int
        """
        s = int(math.sqrt(2*n))
        if(s*(s+1)/2)>n:
            return s-1
        else :
            return s
			*/
int main()
{
	Solution s;

	//s.arrangeCoins2(5);
	//s.arrangeCoins2(8);
	s.arrangeCoins2(2147483647);
    return 0;
}

