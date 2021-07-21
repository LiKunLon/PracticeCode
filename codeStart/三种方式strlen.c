三种方式模拟实现strlen
①指针-指针
#pragma warning (disable:4996)
#include<stdio.h>
int MyStrlen(char* p)
{
	char* s = p;
	while (*s != '\0')
	{
		s++;
	}
	return s-p;
}
int main()
{
	char* a = "Lilan is my girl!";
	printf("%d\n", MyStrlen(a));
	return 0;
}

②递归
#include<stdio.h>
int MyStrlen(char* str)
{
	if (*str == '\0')
		return 0;
	return 1 + MyStrlen(str + 1);
}
int main()
{
	char* str1 = "lilan is cute!";
	printf("%d\n", MyStrlen(str1));
	return 0;
}

③计数器
#include<stdio.h>
int MyStrlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char *str = "Lilan is cute!";
	printf("%d\n", MyStrlen(str));
	return 0;
}