函数功能:把字符串转换成整型数, atoi（）会扫描参数string字符串，跳过前面的空格字符串，直到遇上数字或正负号才开始做转换，而再遇到非数字或字符串‘\0’时才结束转换，并将结果返回，返回转换后的整型数。

函数原型:
int atoi( const char *string );

#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[] = "-123";
	char b[] = "100";
	printf("%d\n", atoi(a) + atoi(b));
	return 0;
}