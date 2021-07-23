#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
int main()
{
	char str[] = "2000.08.01/lkl";
	char* p = strtok(str, "./");
	while (p != NULL)
	{
		printf("%s\n", p);
		p = strtok(NULL, "./");
	}
	return 0;
}