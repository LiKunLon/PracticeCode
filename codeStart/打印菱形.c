//打印菱形
#pragma warning(disable:4996)
#include <stdio.h>
#include <windows.h>
#define num 7
int main()
{
	//输出菱形上半部分
	int i = 1;
	for (; i <= num; i++)//利用该for循环来限定行数
	{
		int j = 0;
		for (; j < num - i; j++)//该for循环来限定每行的空格数
		{
			printf(" ");
		}
		int k = 0;
		for (; k < 2 * i - 1; k++)//该for循环来限定每行的星星数
		{
			printf("*");
		}
		printf("\n");
	}
	//输出菱形下半部分,该菱形具有对称性，而后6行和前6行是对称的，所以这里要num-1
	for (int i = num - 1; i > 0; i--)
	{
		int j = 0;
		for (; j < num - i; j++)//该for循环来限定每行的空格数
		{
			printf(" ");
		}
		int k = 0;
		for (; k < 2 * i - 1; k++)//该for循环来限定每行的星星数
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}