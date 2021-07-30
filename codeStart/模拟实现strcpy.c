#pragma warning(disable:4996)
#include<stdio.h>
void MyStrcpy(char *str1, char *str2)
{
	for (int i = 0;; i++)
	{
		*(str2 + i) = *(str1 + i);
		if (*(str1+i) == '\0')
			break;
	}
}
int main()
{
	char str1[999];
	char str2[999];
	scanf("%s", str1);
	MyStrcpy(str1,str2);
	printf("复制后str2的内容为:%s\n", str2);
	return 0;
}