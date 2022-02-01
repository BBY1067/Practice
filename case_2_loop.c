#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//计算1！+2！+...+10！
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int d = 0;
//	int e = 0;
//	for (a = 1;a < 11;a++)
//	{
//		if (b == a)
//		{
//			d = b * c;
//			c = d;
//			b++;
//			printf("%d ", c);
//		}
//		e += c;
//	}
//	printf("最终结果为 % d", e);
//	return 0;
//}

//优化计算
// 计算n！的级数
//int main()
//{
//	int a = 0;
//	int i = 1;
//	int sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (a = 1;a <= n;a++)
//	{
//		i = a * i;
//		sum = sum + i;
//	}
//	printf("值=%d", sum);
//	return 0;
//}
