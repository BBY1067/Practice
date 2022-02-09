#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//写一个函数求出两个数的最小值
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int i=Max(a, b);
//	printf("%d", i);
//	return 0;
//}


//写一个函数可以交换两个整型变量
//实参：必须是确定的值，可以是常数 变量 表达式 有值函数。
//形参：调用后才实例化（分配内存空间），调用完成后自动摧毁。换句话说：形参是实参的临时拷贝
//形参和实参占用不同的内存块
void change(int* x, int* y)//注意void表示没有返回值，函数名括号后面为形参，代表不了实参，所以要使用指针
{
	int i = 0;
	i = *x;
	*x = *y;
	*y = i;
}

int main()
{
	int a = 10;
	int b = 555;
	printf("a=%d,b=%d\n", a, b);
	change(&a, &b);
	printf("a=%d,b=%d",a,b);
	return 0;
}

