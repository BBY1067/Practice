#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include< math.h >
//打印1000-2000年的闰年
// 闰年条件：1.能被4整除，但不能被100整除
// 2.能够被400整除
//int main()
//{
//	int i = 1000;
//	for (i = 1000;i <= 2000;i++)
//	{
//		if (i % 4 == 0 && i % 100!= 0)
//			printf("闰年%d  ", i);
//		else if (i % 400 == 0)
//			printf("闰年%d  ", i);
//	}
//	return 0;
//}

//打印一个100-200间的素数
//1.试除法：打印2--i-1的数
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 100;i <= 200;i++)
	{
		for (j = 2;j <i;j++)//简化将j<i改成j<=sqrt(i)或者j<=i/2,调用头文件#include< math.h >
		{
			if (i % j == 0)
				break;
		}
		if (j == i)//此处变为j>sqrt(i)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("共有%d个素数", count);
	return 0;
}

//简化：不用使用2--i-1去打印，使用2--根号i
//原理：i=a*b a与b中任意一个因子的值必定小于或等于根号i，
