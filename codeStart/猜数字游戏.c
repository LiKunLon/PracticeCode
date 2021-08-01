#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void menu()
{
	printf("---------------------\n");
	printf("----------1.开始-----\n");
	printf("----------2.结束-----\n");
	printf("---------------------\n");
}
void game()
{
	srand((unsigned int)time(NULL));
	int ret = rand() % 100 + 1;//随机生成一个1-100的整数
	int num = 0;
	while (1)
	{
		printf("请输入数字:");
		scanf("%d", &num);
		if (num > ret)
		{
			printf("猜大了\n");
		}
		else if (num < ret)
		{
			printf("猜小了\n");
		}
		else 
		{
			printf("恭喜你,猜对了\n");
			break;
		}		
	}
}


int main()
{
	int quit = 0;
	while (!quit)
	{
		menu();
		printf("请输入:");
		int select = 0;
		scanf("%d", &select);
		switch (select)
		{

		case 1:
			game();
			printf("再来一把不?\n");
			break;
		case 2:
			quit = 1;
			printf("游戏结束\n");
			break;
		default:
			printf("输入有误\n");
			break;
		}
	}
}