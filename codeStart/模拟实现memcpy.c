#pragma warning(disable:4996)
#include<stdio.h>
void MyMemcpy(char* dest,char* src,int size,int num)
{
	int i = 0;
	int ret = size*num;
	for (;i<ret; i++)
	{
		
		*(dest +i ) = *(src + i);
		if (*src == '\0')
			break;
	}
}
int main()
{
	char dest[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	char src[] = { 1, 1, 1, 1 };
	MyMemcpy(dest, src, 1, 4);
	int len = sizeof(dest) / sizeof(dest[0]);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", dest[i]);
	}
	return 0;
}