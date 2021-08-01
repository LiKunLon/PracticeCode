#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Differ(int x,int y)
{
	int n = x^y;
	int count = 0;
	while (n != 0)
	{
		count++;
		n = n&(n - 1);

	}
	return count;
}
int main()
{
	int a = 1999;
	int b = 2299;
	printf("这两个数有%d个比特位不同!\n", Differ(a, b));
	return 0;
}