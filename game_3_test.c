#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include "game_3.h"//�궨��
//ʵ����������Ϸ
void menu()
{
	printf("################################\n");
	printf("#### 1.play ######## 0.quit ####\n");
	printf("################################\n");
}

//��Ϸ�������㷨ʵ��
void test()
{
	char ret = 0;
	char arr[ROW][COL] = {0};
	//��ʼ������
	initboard(arr, ROW, COL);
	//��ӡ����
	displayboard(arr, ROW, COL);
	//����
	while (1)
		//1.�������
	{
		player(arr, ROW, COL);
		displayboard(arr, ROW, COL);
		ret=over(arr, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		//2.��������
		computer(arr, ROW, COL);
		displayboard(arr, ROW, COL);
		ret=over(arr, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '+')
	{
		printf("player win!!!");
	}
	else if(ret=='#')
	{
		printf("computer win!!!");
	}
	else
	{
		printf("no one win.");
	}
}
int main()
{
	int press = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("Please choose:>");
		scanf("%d", &press);
		switch (press)
		{
		case 1:
		{
			test();
			break;
		}
		case 0:
			printf("quitting the game");
			break;
		default:
			printf("Not valid.Choose again\n");
			break;
		}
	} while (press);

	return 0;
}