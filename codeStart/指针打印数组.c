#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void pri(int *arr,int len)
{
	int *p = arr;
	for (int i = 0; i < len; i++)
	{
		printf("%d ", *(p+i));
	}
}

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	pri(arr, len);
	return 0;
}