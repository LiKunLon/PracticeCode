//strncat
//将src的n个字节拼接到dest后面
#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char dest[20] = "To be ";
	char src[20] = "or not to be!";
	strncat(dest, src, 50);
	printf("%s\n", dest);
	return 0;
}