三子棋
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#define ROW 3
#define COL 3
//初始化一个二维数组当做棋盘
//展示棋盘---|||
//玩家落子
//电脑落子
//判赢
//遍历数组
//game函数(判断返回值)
//main函数控制游戏


void initBoard(char board[][COL], int row, int col);
void showBoard(char board[][COL], int row, int col);
void playerMove(char board[][COL], int row, int col);
void computerMove(char board[][COL], int row, int col);
char isWin(char board[][COL], int row, int col);
void menu()
{
	printf("******欢迎来到三子棋游戏******\n");
	printf("******************************\n");
	printf("***********1.要玩赶紧*********\n");
	printf("*****************************\n");
	printf("***********2.不玩走开********\n");
	printf("****************************\n");
	printf("****************************\n");
}
//初始化棋盘全为空格
void initBoard(char board[][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//展示棋盘
void showBoard(char board[][COL], int row, int col)
{
	printf("*******************************\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//棋盘输入格式为:  空X空(空O空)
			if (j < col - 1)
				printf("|");//输出两列 |
		}
		printf("\n");
		if (i < row - 1)//控制---行数
		{
			for (int j = 0; j < col; j++)//循环控制---列数
			{
				printf("---");//输出两行---
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
	printf("*******************************\n");
}
//玩家落子
void playerMove(char board[][COL], int row, int col)
{
	int x = 0;//代表坐标
	int y = 0;
	while (1)
	{
		printf("请输入1-3的坐标:\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'X';
				break;
			}
		}
		else
		{
			printf("输入错误,请重新输入!\n");
		}
	}
}
//电脑落子
void computerMove(char board[][COL], int row, int col)
{
	while (1)
	{
		srand((unsigned)time(NULL));
		int x = rand() % ROW;//row=3-->0,1,2
		int y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = 'O';
			break;
		}
	}
}
//判赢
char isWin(char board[][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		//行
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != " ")
		{
			return board[i][0];//返回这个格子的字符,看是谁赢
		}

		//列
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != " ")
		{
			return board[0][i];
		}
		//对角线(左上->右下)
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != " ")
		{
			return board[0][0];
		}
		//对角线(右上->左下)
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != " ")
		{
			return board[0][2];
		}
		//是否平局(遍历数组没空格)
		if (isFull(board, row, col) == 1)
		{
			return 'Q';//平局
		}
	}
	return ' ';//代表没人赢
}
//判断棋盘是否满了
int isFull(char board[][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//棋盘没满
			}
		}
	}
	return 1;//棋盘满了
}


void game()
{
	char board[ROW][COL] = { 0 };
	initBoard(board, ROW, COL);
	showBoard(board, ROW, COL);
	int ret = 0;
	while (1)
	{
		playerMove(board, ROW, COL);
		showBoard(board, ROW, COL);
		ret = isWin(board, ROW, COL);
		if (ret != ' ')
		{
			break;//肯定有个人赢了
		}
		computerMove(board, ROW, COL);
		showBoard(board, ROW, COL);
		ret = isWin(board, ROW, COL);
		if (ret != ' ')
		{
			break;//肯定有个人赢了
		}
	}
	if (ret == 'Q')
	{
		printf("平局\n");
		return;
	}
	if (ret == 'X')
	{
		printf("玩家赢\n");
		return;
	}
	if (ret == 'O')
	{
		printf("电脑赢\n");
	}
}


int main()
{	
	int quit = 0;
	while (!quit)
	{
		menu();
		printf("扣1玩游戏,扣2拜拜->\n");
		int input = 0;
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("就这?再来一把?\n");
			break;
		case 2:
			quit = 1;
			printf("退出游戏!\n");
			break;
		default:
			printf("您的输入有误!\n");
			break;
		}
	}
	return 0;
}