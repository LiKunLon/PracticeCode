#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
#include<assert.h>
char* MyStrncat(char *dest,char *src, int num)
{
	assert(dest != NULL);
	assert(src != NULL);
	char *ret = dest;
	while (*dest)
	{
		dest++;
	}
	if (strlen(src)<num)
	{
		num = strlen(src);
	}
	while (num--)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return ret;
}
int main()
{
	char dest[20] = "hello";
	char src[20] = "world";
	MyStrncat(dest, src, 5);
	printf("%s\n", dest);
	return 0;
}