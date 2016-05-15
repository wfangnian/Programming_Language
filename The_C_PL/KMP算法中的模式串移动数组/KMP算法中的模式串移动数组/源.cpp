/*
一个模式串，仅由英文小写字母组成。长度不大于100。
输出
输出模式串对应的移动数组next。每个整数后跟一个空格。
样例输入
abaabcac
样例输出
0 1 1 2 2 3 1 2 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXSIZE 22
//typedef struct {
//	char str[MAXSIZE];
//}*SString;
typedef unsigned char SString[MAXSIZE + 1];
void get_next(SString T, int *next) {
	int i = 1;
	next[1] = 0;
	int j = 0; 
	while (i < T[0]){
		if (j == 0 || T[i] == T[j]) {
			++i;
			++j;
			next[i] = j;
			printf("%d ", i);
		}
		else j = next[i];
		printf("%d ", j);
	}
}

int main() {
	SString S;
	scanf("%s", S);
	
	int next[8];
	//*next = strlen(str);
	get_next(S, next);

	return 0;
}