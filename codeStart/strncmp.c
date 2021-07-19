//strncmp
//比较str里的n个字节,成功返回0
#pragma warning (disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
int main()
{
	char str[] = "Looking at my face!";
	if (strncmp(str, "Lo", 2) == 0)
		printf("成功!\n");
	return 0;
}