#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>//ʹ��ʱ���
//��������Ϸ��
//1.�����������һ������   ��2.������
void menu()
{
	printf("+++++++++++++++++++++++++++++++\n");
	printf("+++++   1.play   0.exit   +++++\n");
	printf("+++++++++++++++++++++++++++++++\n");
}
void game()
{
	int i = 0;
	int r = 0;
	r = rand() % 100 + 1;//�˴�����1-100֮���������� ��Ϊ�κ�һ��������100������Ϊ0-99
						 //Ϊ��ʹ�����ÿ��������Ϸ���ǰ���ͬ��˳���������Ҫ�õ�srand������ʱ���
						  //ʱ�������������ڵ�ʱ����1970��1��1�� 0��0��0ʱ����ʱ�� ��λΪ���루s��

	while (r)
	{
		printf("guess the number:>");
		scanf("%d", &i);
		while (i != r)
		{
			if (i < r)
			{
				printf("too small,please type again:");
				scanf("%d", &i);
			}
			else if (i > r)
			{
				printf("too big,please type again:");
				scanf("%d", &i);
			}
		}
		printf("BINGO!\n");
		printf("would you like to continue?\n");
		break;
	}
}
int main()
{
	menu();
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("quit playing\n");
			break;
		default:
			printf("choose again\n");
			break;
		}
	} while (input);

	return 0;
}