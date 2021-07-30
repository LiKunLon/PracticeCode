#pragma warning(disable:4996)
#include<stdio.h>
void* MyMemmove(void* dest, void* src, int count)
{
	void* ret = dest;
	if (src > dest)
	{
		while (count != 0)
		{
			*(char*)dest = *(char*)src;
			((char*)dest)++;//++优先级高,给前面带括号
			((char*)src)++;
			count--;
		}
	}
	//src<dest的情况,发生内存重叠,从后往前拷贝
	else
	{
		count--;//15次
		while (count >= 0)
		{
			*((char*)dest + count) = *((char*)src + count);
			count--;
		}
	}
	return ret;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	MyMemmove(arr + 2, arr, 16);
	int i = 0;
	for (; i < 8; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}