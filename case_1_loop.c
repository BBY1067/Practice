#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//计算n的阶乘
int main()
{
	int a = 0;
	int b = 0;
	int c = 1;
	scanf("%d",&b);
	while (b>0)
	{
		a = b * c;
		c = a;
		b--;
	}
	printf("阶乘结果为%d",c);
		return 0;

}