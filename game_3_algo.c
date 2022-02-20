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
		for (j = 0;j < col;j++)
		{
				printf(" %c ", arr[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
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