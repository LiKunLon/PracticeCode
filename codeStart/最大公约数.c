//最大公约数
#pragma warning(disable:4996)
#include<stdio.h>
int yueShu(int a,int b)
{
	int c = 0;
	while (b)
	{
		c = a%b;
		a = b;
		b = c;
	}
	return a;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("%d\n", yueShu(a, b));
	return 0;
}