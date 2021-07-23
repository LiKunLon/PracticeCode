演示多个字符从两端移动，向中间汇聚

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char arr1[] = "******************";
	char arr2[] = "LiLan is my honey!";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		Sleep(1000);
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		left++;
		right--;
		printf("%s\n", arr1);
	}
	return 0;
}
```