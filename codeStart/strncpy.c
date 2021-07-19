strncpy
把src的n个字节拷贝给dest
#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
int main()
{
	char dest[] = "likunlong";
	char src[] = "verygood";
	strncpy(dest, src, 2);
	printf("%s\n", dest);
	return 0;
}