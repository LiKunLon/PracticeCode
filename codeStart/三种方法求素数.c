写一个函数判断一个数是否是素数(常规法)

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a;
	int i = 0;
	printf("请输入一个整数:\n");
	scanf("%d", &a);
	for ( i = 2; i < a; i++)
	{
		if (a%i == 0)//如果可以除尽,则不是素数
			break;
	}
	//两种情况退出:①因为break②不满足循环条件i<=a
	if (i <a)//满足循环条件,因为break退出.
	{
		printf("不是素数\n");
	}
	else
	{
		printf("是素数\n");
	}
	return 0;
}
```

写一个函数判断一个数是否是素数(n/2)

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int isPrime(int n)
{
	int i = 0;
	for (i = 2; i <= (n/2); i++)
	{
		if (n%i == 0)
			return 1;
	}
	return 0;
}

int main()
{
	int num = 0;
	printf("请输入一个整数:\n");
	scanf("%d", &num);
	int ret = isPrime(num);
	if (ret == 1)
	{
		printf("%d不是素数\n", num);
	}
	else
	{
		printf("%d是素数", num);
	}
	return 0;
}

```

写一个函数判断一个数是否是素数(sqrt)

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
			return -1;
	}
	return 0;
}

int main()
{
	int a = 0;
	printf("请输入一个数:\n");
	scanf("%d", &a);
	int ret = isPrime(a);
	if (ret == -1)
		printf("%d不是素数\n", a);
	else
	{
		printf("%d是素数\n", a);
	}
	return 0;
}

```