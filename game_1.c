#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>//使用时间戳
//猜数字游戏；
//1.电脑随机生成一个数字   ；2.猜数字
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
	r = rand() % 100 + 1;//此处生成1-100之间的随机数数 因为任何一个数除以100的余数为0-99
						 //为了使随机数每次启动游戏不是按相同的顺序输出，需要用到srand（）和时间戳
						  //时间戳：计算机现在的时间与1970年1月1日 0：0：0时相差的时间 单位为：秒（s）

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