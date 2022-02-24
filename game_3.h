#define ROW 3
#define COL 3
#include<stdio.h>
//函数声明
void initboard(char arr[ROW][COL], int row, int col);
void displayboard(char arr[ROW][COL], int row, int col);
void player(char arr[ROW][COL], int row, int col);
void computer(char arr[ROW][COL], int row, int col);
//判断结果函数
//1.玩家赢  +
//2.电脑赢  #
//3.平局  e
//4.继续   c
char over(char arr[ROW][COL], int row, int col);
int isfull(char arr[ROW][COL], int row, int col);
