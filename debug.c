#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
  
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0;i <= 12;i++)
	{
		printf("nicot\n");
		arr[i] = 0;
	}
	system("pause");
	return 0;
}
//F5启动调试--和F9（断点）：设置断电或者切换断电 配合使用
//F5:启动调试，经常用来调到下一个断点处（是指程序运行逻辑上的下一个断点
//F9:创建断点和取消断点，断点可以在程序的任意位置进行设置，可以使得程序在任意位置停止执行
//F10:逐过程，过程可以是一次函数调用，也可以是一条语句
//F11:逐语句，可以进入函数调用的内部
//CTRL+F5：开始运行而不调试
//shift+F5：停止调试