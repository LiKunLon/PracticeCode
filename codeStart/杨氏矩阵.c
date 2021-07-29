//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，编写程序在矩阵中查找某个数字是否存在。
#pragma warning(disable:4996)
#include<stdio.h>
int Find(int str[3][3], int key, int row, int col)
{
	int i = 0;
	int j = col - 1;
	while (i<row&&j>=0)
	{
		if (str[i][j] < key)
			++i;
		else if (str[i][j]>key)
		{
			--j;
		}
		else
		{
			printf("找到了!\n");
			printf("它第一次出现位置是arr[%d][%d]\n", i, j);
			break;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 2, 3, 4 }, { 3, 4, 5, } };
	int key = 0;
	printf("输入要找的数字:\n");
	while (scanf("%d", &key) != EOF)
	{
		Find(arr, key, 3, 3);
	}
	return 0;
}