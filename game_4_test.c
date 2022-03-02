#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<time.h>
#include "game_4.h"
#include <stdlib.h>

//两个扩展点：
//1.第一次点击一定不会踩雷
//2.无雷区拓展，使得能够推算雷的位置
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
	//雷的信息存储
	//1.布置好的雷的信息
	char board[ROWS][COLS] = { 0 };
	//2.排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	//
	initial(board, ROWS, COLS,'0');//初始化雷:同一个函数初始化不一样，添加参数
	initial(show, ROWS, COLS,' ');

	minesave(board, ROW, COL);//生成雷

	map(board, ROW, COL);//打印雷

	map(show, ROW, COL);
	
	//扫雷
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