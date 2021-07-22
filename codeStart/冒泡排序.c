冒泡排序
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubbleSort(int arr[],int len)
{
	//i表示趟数
	for (int i = 0; i <= len - 1; i++)
	{
		//j表示每趟中比较几次
		for (int j = 0; j < len - 1 - i; j++)//len-1-i减少不必要比较次数
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
void Show(int arr[], int len)
{
	for (int i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main()
{
	int arr1[] = { 1, 5, 4, 65, 43, 87, 54 };
	int len = sizeof(arr1) / sizeof(arr1[0]);
	Show(arr1,len);
	bubbleSort(arr1, len);
	Show(arr1,len);
	return 0;
}