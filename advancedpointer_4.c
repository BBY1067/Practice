#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//代码1
//(*(void(*)())0)();
// 
//把0强制类型转换void(*)()函数指针类型，->0就是一个函数的地址
// 最后一个（）代表，调用0地址处的该函数
// 
// 强制类型转换（void(*)()）0
// 解引用*(void(*)())0


//代码2
//void(*signal(int, void(*)(int)))(int);
//void(*   signal(int, void(*)(int))    )(int)
//理解层面void(*)(int)   signal(int, void(*)(int))
//但是返回指针类型，函数名必须要和*在一起

//简化
//void(*signal(int, void(*)(int)))(int);
//typedef void(*pp)(int);//给void(* )(int)取名
//
//pp signal(int, pp);

//综上所述，signal是一个函数声明，signal函数有两个参数，第一个是int，第二个是函数指针
//该函数指针指向的函数的参数是int，返回类型为void
//signal函数的返回类型也为一个函数指针，该函数指针指向的函数的参数是int，返回类型为void


//调用函数指针，解引用*符号没有用
//int（*pa）(int,int)=Add;
// 
//printf("%d\n",(*pa)(2,3));=printf("%d\n",pa(2,3));=printf("%d\n",Add(2,3))


//小Boss：函数指针数组!!!!!!!

//int Add(int x, int y)
//{
//	return x + y;
//}
//int	Sub(int x, int y)
//{
//	return x - y;
//}
//int	Mul(int x, int y)
//{
//	return x * y;
//}
//int	Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//指针数组
//
//	//需要一个数组，存放4个函数的地址（运算规则）
//	int (*pa)(int, int) = Add;
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

//练习题
int (*parr1[10])();
int* parr2[10]();
int(*)()parr3[10];