#define  _CRT_SECURE_NO_WARNINGS 1
#include "game_4.h"
//��ʼ����
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
//������
void minesave(char board[ROWS][COLS], int row, int col)
{
	int num = 0;//�׵ĸ���
	int i = 0;
	int j = 0;
	while (num < easy_count)
	{
		i = rand() % row+1;
		j = rand() % col+1;//��Ϊ����ʵ����Ϊ11*11,������ʾ���������±�Ӧ��Ϊ1-9
		if (board[i][j] == '0')
		{
			board[i][j] = '1';
			num++;
		}
		else
			continue;
	}
}
//��ӡ��
void map(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i <= row;i++)//����Ϊ11x11����ӡ�м�9*9�������е�С���1��ʼ
	{
		if (i == 0)//��ӡ�к�
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
		printf("%d ", i);//��ӡ�к�
		for (j =1;j <=col;j++)
		{
			printf("|");
			printf(" %c ", board[i][j]);
		}
		printf("|\n");
		for (j = 1;j <col;j++)//��ӡ�ָ���
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


//�����ף������·�ɨ�ף�δд��ͷ�ļ�
int count(char board[ROWS][COLS], int x, int y)
{
	//����ASCII�룺'3'-'0'=3(�ַ�����͵����ַ��������ֵ�����
	return board[x - 1][y] + board[x - 1][y - 1] + board[x][y - 1] + board[x + 1][y - 1] +
		board[x + 1][y] + board[x + 1][y + 1] + board[x][y + 1] + board[x - 1][y + 1] - 8 * '0';
}


//ɨ��
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
				show[x][y] = ret+'0';//�����ַ������ֵ�ת��
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

//����������������ƶ��׵�λ�ã��ݹ飩
//���㣺1.���겻����  2.������Ҳ��ΧҲû����
