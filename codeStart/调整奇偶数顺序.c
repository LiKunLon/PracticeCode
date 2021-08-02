//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
#pragma warning(disable:4996)
#include<stdio.h>
void SwapArr(int *arr, int len)
{
	int left = 0;
	int right = len - 1;
	for (int i = 0; i < len; i++)
	{
		while ((left < right) && arr[left] % 2 == 1)//从左到右找到偶数停止
		{
			left++;
		}
		while ((left < right) && arr[right] % 2 == 0)//从右往左找到奇数停止
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	SwapArr(arr, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d\t", arr[i]);
	}
	return 0;
}