模拟用户登录场景

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char passward[20] = { 0 };
	int i = 0;
	for (i = 1; i <= 3; i++)
	{
		printf("请输入密码:");
		scanf("%s", passward);
		if (strcmp(passward, "1234") == 0)
			printf("登陆成功!\n");
		else
		{
			printf("密码有误,你还有%d次机会\n",3-i);
		}
	}
	return 0;
}
```