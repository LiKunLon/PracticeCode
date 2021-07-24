#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
#include<time.h>
#define ROW 12
#define COL 12
#define NUM 20//部署20个雷
void  initBoard(char board[][COL], int row, int col, char elem);
void  setMine(char mine[][COL], int row, int col);
void  showBoard(char board[][COL], int row, int col);
char  getNum(char mine[][COL], int x, int y);//'0','1','2'

void  initBoard(char board[][COL], int row, int col, char elem)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = elem;
		}
	}
}
void  setMine(char mine[][COL], int row, int col)
{
	int n = NUM;
	while (n)
	{
		int x = rand() % (row - 2) + 1;
		int y = rand() % (col - 2) + 1;
		mine[x][y] = '1';
		n--;
	}
}
void  showBoard(char board[][COL], int row, int col)
{
	int i = 1;
	printf("   ");
	for (; i <= col - 2; i++)
	{
		printf(" %-2d|", i);
	}
	printf("\n");
	for (i = 1; i <= col - 2; i++)
	{
		printf("%3s", "----");
	}
	printf("---\n");

	for (i = 1; i <= row - 2; i++)
	{
		printf("%2d|", i);
		int j = 1;
		for (; j <= col - 2; j++)
		{
			printf(" %-2c|", board[i][j]);
		}
		printf("\n");
		for (j = 1; j <= col - 2; j++)
		{
			printf("%3s", "----");
		}
		printf("---\n");
	}
}
char  getNum(char mine[][COL], int x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + \
		mine[x][y - 1] + mine[x][y + 1] + \
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 7 * '0';
}
void game()
{
	srand((unsigned)time(NULL));
	char board[ROW][COL];
	char mine[ROW][COL];
	initBoard(board, ROW, COL, '*');//初始化面板为全*
	initBoard(mine, ROW, COL, '0');
	setMine(mine, ROW, COL);//布雷 
	int count = (ROW - 2)*(COL - 2) - NUM;//没雷格子总数
	do
	{
		int x = 0;
		int y = 0;
		showBoard(board, ROW, COL);
		printf("输入要扫的位置-> ");
		scanf("%d %d", &x, &y);
		if (x<1 || x>10 || y<1 || y>10)
		{
			printf("输入有误!\n");
			continue;//结束本次循环,恢复到最开始
		}
		if (board[x][y] != '*')
		{
			printf("已经被扫过了!\n");
			continue;
		}
		if (mine[x][y] == '0')
		{
			count--;//排除完没雷的格子
			char num = getNum(mine, x, y);
			board[x][y] = num;
		}
		else
		{
			printf("这坐标(%d,%d)有雷,这个b被炸死!\n", x, y);
			break;
		}
	} while (count>0);
	//两种情况退出循环:①break②不满足循环条件
	if (count > 0)
	{
		printf("你直接被炸飞!\n");
	}
	else
	{
		printf("恭喜这个b扫雷成功!\n");
	}
	showBoard(mine, ROW, COL);
}
void menu()
{
	printf("********欢迎来到扫雷游戏******\n");
	printf("*****************************\n");
	printf("**************1.play*********\n");
	printf("**************2.quit*********\n");
	printf("*****************************\n");
}
int main()
{
	int quit = 0;
	while (!quit)
	{
		menu();
		int input;
		printf("请输入数字是否开始游戏:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("就这?再搞一把?\n");
			break;
		case 2:
			quit = 1;
			printf("真别玩了!\n");
			break;
		default:
			printf("就俩数字输不对?重新输!\n");
			break;
		}
	}
	return 0;
}