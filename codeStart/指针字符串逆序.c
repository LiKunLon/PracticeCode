#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
void reverse(char* str)
{
	char* left = str;//数组名代表首元素地址
	char* right = str + strlen(str) - 1;//str加数组元素个数等于最后一个元素的地址
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		++left;
		--right;
	}
}

int main()
{
	char str1[] = "woaiLiLan";
	reverse(str1);
	printf("%s\n", str1);
	return 0;
}