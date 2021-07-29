//最小公倍数
#pragma warning(disable:4996)
#include<stdio.h>
int beiShu(int a, int b)
{
	int m = a;
	int n = b;
	while (b)
	{
		int c = a%b;
		a = b;
		b = c;
	}
	return m*n / a;
}
int main()
{
	int a;
	int b;
	scanf("%d %d", &a, &b);
	printf("%d\n", beiShu(a, b));
	return 0;
}