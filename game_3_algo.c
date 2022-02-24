#define  _CRT_SECURE_NO_WARNINGS 1
#include "game_3.h"
void initboard(char arr[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	for (x = 0;x < row;x++)
	{
		for (y = 0;y < col;y++)
		{
			arr[x][y] =' ';
		}
	}
}

void displayboard(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		//1.打印数据行
		for (j = 0;j < col;j++)
		{
				printf(" %c ", arr[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//2.打印分割行
		if (i < row - 1)
		{
			for(j=0;j<col;j++)
			{
			    printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
//玩家走棋
void player(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int r = 0;
	int c = 0;
	int a = 0;
	//输入行数
	printf("choose the row;>");
	scanf("%d", &r);
	while(r <= 0 || r > row)
	{
		printf("Not valid.Choose again.\n");
		scanf("%d", &r);
	}

	//输入列数
	printf("choose the col:>");
	scanf("%d", &c);
	while (c <= 0 || c > col)
	{
		printf("Not valid.Choose again.\n");
		scanf("%d", &c);
	}
	arr[r - 1][c - 1] = '+';
}
void computer(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int r = 0;
	int c = 0;
	again:
	r = rand() % col;
	c = rand() % col;
	if (arr[r][c] == ' ')
	{
		arr[r][c] = '#';
	}
	else
		goto again;
}
int isfull(char arr[ROW][COL], int row, int col)
{
	//返回1，棋盘满了。返回0，棋盘没满
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			if (arr[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
char over(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	//横向
	// 
	for (i = 0;i < row;i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][2] == arr[i][0] && arr[i][0] != ' ')
			return arr[i][0];
	}
	//纵向
	for (i = 0;i < row;i++)
	{
		if (arr[0][i] == arr[1][i] && arr[2][i] == arr[0][i] && arr[0][i] != ' ')
			return arr[0][i];
	}
	//两个对角线
	if (arr[0][0] == arr[1][1] && arr[2][2] == arr[0][0] && arr[0][0] != ' ')
		return arr[1][1];
	if (arr[0][2] == arr[1][1] && arr[2][0] == arr[1][1] && arr[0][2] != ' ')
		return arr[0][2];
	//判断是否平局
	if (1 == isfull(arr, ROW, COL))
		return 'e';

	//继续
	return 'c';
}
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	// 1.横向3子
	//for (i = 0;i < row;i++)
	//{
	//	for (j = 0;j < col;j++)
	//	{
	//		if (arr[i][j] == arr[i][1] && arr[i][1] != ' ')
	//		{
	//			count++;
	//		}
	//	}
	//	if (count == col)
	//		return arr[i][1];
	//}
	////2.纵向3子
	//for (j = 0;j < row;j++)
	//{
	//	for (i = 0;i < col;i++)
	//	{
	//		if (arr[i][j] == arr[1][j] && arr[1][j] != ' ')
	//		{
	//			count++;
	//		}
	//	}
	//	if (count == col)
	//		return arr[1][j];
	//}
	////斜向1
	//for (i = 0;i < row;i++)
	//{
	//	for (j = 0;j < col;j++)
	//	{
	//		if (j == i)
	//		{
	//			if (arr[i][1] == arr[i][j] && arr[i][1] != ' ')
	//				count++;
	//		}
	//	}
	//	if (count == col )
	//		return arr[i][1];
	//}
	////斜向2
	//for (j = 0;j < col;j++)
	//{
	//	if (arr[j - col + 1][j] == arr[1][j] && arr[1][j] != ' ')
	//		count++;
	//	if (count == col )
	//		return arr[1][j];
	//}
	////继续或者平局
	//for (i = 0;i < row;i++)
	//{
	//	for (j = 0;j < col;j++)
	//	{
	//		if (arr[i][j] == ' ')
	//			return 'c';
	//	}
	//}
	//return 'e';
