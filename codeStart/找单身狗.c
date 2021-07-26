//找单身狗
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
#pragma warning(disable:4996)
#include<stdio.h>
//冒泡排序一下
void Sort(int arr[], int len)
{
	int i = 0;
	int j = 0;
	for (; i < len; i++)
	{
		//升序,从后往前遍历
		for (j = i - 1; j >= 0;j--)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
//找单身狗
void Single(int arr[], int len)
{
	int i = 0;
	for (; i < len;)
	{
		if (arr[i] == arr[i + 1])
		{
			i = i + 2;
		}
		else
		{
			printf("%d ", arr[i]);
			i++;
		}
	}
}
int main()
{
	int arr[] = { 1, 3, 2, 7, 5, 2, 1, 4, 9, 6, 3, 7 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Sort(arr, len);
	Single(arr, len);
	return 0;
}