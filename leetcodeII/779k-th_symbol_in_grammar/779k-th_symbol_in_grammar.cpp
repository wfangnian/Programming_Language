// 779k-th_symbol_in_grammar.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>


using namespace std;

//NOTE: (~a)&1  => 当前数字取反 ：bin(3)=0b11=>0b00=0
class Solution {
public:
	int kthGrammar2(int N, int K) {//TLE
		char s[1000]="0";
		//s = "0";
		//string t;
		char t[1000] = "";
		for (size_t i = 0; i < N-1; i++)
		{
			for (char var :s)
			{
				if (var == '0')
					//t += "01";
					strcat(t, "01");
				else if (var == '1')
					//t += "10";
					strcat(t, "10");
			}
			//s = t;
			strcpy(s, t);
			//t = "";
			strcpy(t, "");
		}
		cout << s;
		return 0;
	}
	int kthGrammar(int n, int k) {
		if (n == 1) {
			return 0;
		}
		int half = 1 << (n - 2);
		if (k >half) {
		return (~kthGrammar(n - 1, k - half)) & 1;
		}
		else {
			return kthGrammar(n - 1, k);
		}
	}
};

int main()
{
	Solution s;
	s.kthGrammar(4, 2);
    return 0;
}

