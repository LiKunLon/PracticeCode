#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int cmp_int(const void*elem1, const void*elem2)
{
	return *((int *)elem1) - *((int *)elem2);
}
//一定要加i
void swap(void*elem1, void*elem2, int size)
{
	for (int i = 0; i < size; i++)
	{
		//一个字节一个字节交换
		char tmp = *((char*)elem1 + i);
		*((char*)elem1 + i) = *((char*)elem2 + i);
		*((char*)elem2 + i) = tmp;
	}
}
//len为数组长度,size为数据类型大小
void MyQsort(void *base, int len, int size,int(*cmp)(void *elem1, void *elem2))
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			//if(arr[i]>arr[i+1])
			if (cmp((char*)base + j*size, (char*)base + (j + 1)*size)>0)
			{
				swap((char*)base + j*size, (char*)base + (j + 1)*size,size);
			}
		}
	}
}
int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	MyQsort(arr, len, sizeof(int),cmp_int);
	for (int i = 0; i < len; i++)
	{
		printf("%d\t", arr[i]);
	}
	return 0;
}