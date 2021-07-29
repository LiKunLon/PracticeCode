#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int MyAtoi(char *str)
{
	int tmp = 0;
	assert(str != NULL);
	while (*str==' ')
	{
		str++;
	}
	int s = (*str == '-') ? (-1) : 1;
	if (*str == '+' || *str == '-')
	{
		str++;
	}
	while (*str>='0'&&*str<='9')
	{
		tmp = tmp * 10 + (*str - '0');
		str++;
	}
	return tmp*s;
}
int main()
{
	char str[] = "-123";
	printf("%d\n", MyAtoi(str));
	return 0;
}