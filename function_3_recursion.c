#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//递归的两个必要条件
//1.存在限制条件，当满足限制条件时，递归不再继续
//2.每次递归调用后越来越接近这个限制条件

//史上最简单的递归函数(容易造成stack overflow栈溢出）
//int main()
//{
//	printf("I love you");
//	main();
//	return 0;
//}


//1.接受一个整型值，按照顺序打印它的每一位，输入1234 输出1 2 3 4

//void bili(int i)
//{
//	if (i > 9)
//	{
//		bili(i / 10);
//	}
//	printf("%d ", i % 10);
//}
//int main()
//{
//	unsigned int num = 0;//unsigned：无符号型变量
//	scanf("%d", &num);
//	bili(num);
//	
//	return 0;
//}

//2.编写函数不允许创建临时变量，求字符串的长度

//第一种：直接用strlen函数
//int main()
//{
//	char arr[] = "hehe";
//	int length = strlen(arr);
//	printf("%d", length);
//	return 0;
//}

//第二种：自己写一个函数，使用循环函数打印
//int changdu(char* str)//str是一个地址，arr数组第一个元素的地址
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hehe";
//	int length = changdu(arr);
//	printf("%d", length);
//	return 0;
//}

//递归
//int changdu(char* str)
//{
//	if (*str != '\0')
//		return 1 + changdu(str+1);//不能使用str++，可以使用++str,先递归再++
//	else
//		return 0;//结束的意思
//}
//int main()
//{
//	char arr[] = "hehe";
//	changdu(arr);
//	printf("%d",changdu(arr));
//	return 0;
//}

//3.求n的阶乘
//int multi(int n)
//{
//	if (n != 1)
//		return n * multi(n - 1);
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int res=multi(n);
//	printf("%d", res);
//	return 0;
//}

//4.求第n个斐波那契数
//1 1 2 3 5 8 13...
//
// 第一种：递归法
//int fib(int x)
//{
//	if (x <= 2)
//		return 1;
//	else 
//		return fib(x-1)+fib(x-2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num=fib(n);
//	printf("%d", num);
//	return 0;
//}

//第二种：循环法（更加合适：递归会进行大量重复计算）
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int num = fib(n);
	printf("%d", num);
	return 0;
}

