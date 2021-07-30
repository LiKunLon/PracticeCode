#pragma warning(disable:4996)
#include<stdio.h>
char* MyStrcat(char *dest,char *src)
{
	char *p = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return p;
}
int main()
{
	//注意这里不能是指针,字符串放在只读区,不能修改
	//数组形式是对内存的一份拷贝
	char dest[20] = "bit";
	char *src = "hello";
	MyStrcat(dest, src);
	printf("%s\n", dest);
	return 0;
}