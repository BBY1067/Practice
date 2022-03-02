#define  _CRT_SECURE_NO_WARNINGS 1
#include "game_4.h"
//初始化雷
void initial(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			board[i][j]=set;
		}
	}
}
//生成雷
void minesave(char board[ROWS][COLS], int row, int col)
{
	int num = 0;//雷的个数
	int i = 0;
	int j = 0;
	while (num < easy_count)
	{
		i = rand() % row+1;
		j = rand() % col+1;//因为棋盘实际上为11*11,所以显示的棋盘中下标应该为1-9
		if (board[i][j] == '0')
		{
			board[i][j] = '1';
			num++;
		}
		else
			continue;
	}
}
//打印雷
void map(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i <= row;i++)//棋盘为11x11，打印中间9*9，行与列的小标从1开始
	{
		if (i == 0)//打印列号
		{
			printf("   ");
			for (j = 1;j <= col;j++)
			{
				printf(" %d  ", j);
			}
			printf("\n   ");
			for (j = 1;j <= col;j++)
			{
				printf("----");
			}
			printf("\n");
			continue;
		}
		printf("%d ", i);//打印行号
		for (j =1;j <=col;j++)
		{
			printf("|");
			printf(" %c ", board[i][j]);
		}
		printf("|\n");
		for (j = 1;j <col;j++)//打印分割行
		{
			if (j == 1)
			{
				printf("   ----");
			}
			printf("----");
		}
		printf("\n");
	}
}


//遍历雷：用于下方扫雷，未写入头文件
int count(char board[ROWS][COLS], int x, int y)
{
	//根据ASCII码：'3'-'0'=3(字符相减就等于字符代表的数值相减）
	return board[x - 1][y] + board[x - 1][y - 1] + board[x][y - 1] + board[x + 1][y - 1] +
		board[x + 1][y] + board[x + 1][y + 1] + board[x][y + 1] + board[x - 1][y + 1] - 8 * '0';
}


//扫雷
void sweep(char board[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int click = 0;
	while (click<ROW*COL- easy_count)
	{
		printf("please give the location of mine(row col):>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x][y] == '0')
			{
				int ret = count(board, x, y);
				show[x][y] = ret+'0';//数字字符和数字的转换
				map(show, ROW, COL);
				click++;
			}
			else
				printf("step on mine.you die\n");
		}
		else
			printf("Not valid.Please type again.\n");
	}
	if (click == ROW * COL - easy_count)
		printf("warrior!!!win!!!!");
}

//出现随机区域，用于推断雷的位置（递归）
//满足：1.坐标不是雷  2.该坐标也周围也没有雷
