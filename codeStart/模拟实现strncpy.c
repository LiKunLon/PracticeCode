//模拟实现strncpy
#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* MyStrncpy(char *dest, char *src, int count)
{
	assert(dest != NULL);
	assert(src != NULL);
	while (count--)
	{
		*dest++ = *src++;
	}
	return dest;
}
int main()
{
	char str[20] = "lilan is my girl!";
	MyStrncpy(str, "LILAN", 5);
	puts(str);
	return 0;
}