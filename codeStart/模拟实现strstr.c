#pragma warning(disable:4996)
#include<stdio.h>
char* MyStrstr(char* str1, char* str2)
{
	char* start = str1;
	while (*start != '\0')
	{
		char* s1 = start;//每次都从start开始
		char* s2 = str2; //每次从头开始
		while (s1 && s2 && *s1 == *s2)
			//主串子串相同,就往后加,但不能是\0
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return start;
		}
		start++;//不一样之后主串往后加一个
	}
	return NULL;
}
int main()
{
	char *str1 = "likunlong";
	char* str2 = "kun";
	printf("%s\n", MyStrstr(str1, str2));
	return 0;
}