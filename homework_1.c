  #define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//写代码将三个数字从大到小输出


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	while (a > b)
//	{
//		if (a > c)
//		{
//			printf("%d ", a);
//			if (b > c)
//				printf("%d %d", b, c);
//			else
//				printf("%d %d", c, b);
//		}
//		else
//			printf("%d %d %d", c, a, b);
//	}
//	if (b > c)
//	{
//		printf("%d ", b);
//		if (a > c)
//			printf("%d %d", a, c);
//		else
//			printf("%d %d", c, a);
//	}
//	else
//		printf("%d %d %d", c, b, a);
//	return 0;
//}

//冒泡算法:把最大值往上赋
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)//a的值小于b，所以把b的值赋给a，a成最大值
	{
		int blank = a;//中间变量很有必要，可读性和逻辑性
		a = b;
		b = blank;
	}//如果a<b条件此时成立，则经过语句后 条件结果为a>b：（经过一次转换，改变大小符号；不符合if条件的结果=符合if条件的进行赋值改造的结果）
	if (a < c)//此时a>b
	{
		int blank = a;
		a = c;
		c = blank;
	}//如果a<c成立；则经过语句后 a>c
	if (b < c)
	{
		int blank = b;
		b = c;
		c = blank;
	}//如果b<c成立；则经过语句后b>c,综上a>b>c
	printf("%d %d %d", a, b, c);
	return 0;
}
