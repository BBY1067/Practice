#define ROW 3
#define COL 3
#include<stdio.h>
//��������
void initboard(char arr[ROW][COL], int row, int col);
void displayboard(char arr[ROW][COL], int row, int col);
void player(char arr[ROW][COL], int row, int col);
void computer(char arr[ROW][COL], int row, int col);
//�жϽ������
//1.���Ӯ  +
//2.����Ӯ  #
//3.ƽ��  e
//4.����   c
char over(char arr[ROW][COL], int row, int col);
int isfull(char arr[ROW][COL], int row, int col);
