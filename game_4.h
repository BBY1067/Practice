#define ROW 9
#define COL 9

#define easy_count 10
#define ROWS ROW+2//扩展一列，实际上为9x9
#define COLS COL+2
#include<stdio.h>
void initial(char board[ROWS][COLS], int rows, int cols,char set);
void minesave(char board[ROWS][COLS],int row,int col);
void map(char board[ROWS][COLS], int row, int col);