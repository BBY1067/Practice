#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<time.h>
#include "game_4.h"
#include <stdlib.h>

//������չ�㣺
//1.��һ�ε��һ���������
//2.��������չ��ʹ���ܹ������׵�λ��
void menu()
{
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");   
	printf("$$$$$$$     MINESWEEPER    $$$$$$$\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("$$$   1.start  $$$$   0.quit   $$$\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
}
void game()
{
	//�׵���Ϣ�洢
	//1.���úõ��׵���Ϣ
	char board[ROWS][COLS] = { 0 };
	//2.�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//
	initial(board, ROWS, COLS,'0');//��ʼ����:ͬһ��������ʼ����һ������Ӳ���
	initial(show, ROWS, COLS,' ');

	minesave(board, ROW, COL);//������

	map(board, ROW, COL);//��ӡ��

	map(show, ROW, COL);
	
	//ɨ��
	sweep(board, show, ROW, COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("choose to play:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			printf("quit the game...\n");
			break;
		}
		default:
		{
			printf("not valid.please choose again");
			break;
		}
		}
	} while (input);

}

int main()
{
	test();
	return 0;
}