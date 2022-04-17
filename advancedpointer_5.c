#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//char* my_strcpy(char* dest, const char* src);
//写一个函数指针pf，能够指向my_strcpy;
//写一个函数指针数组，能够存放4个my_strcpy的地址；

//char* (*pf)(char*, const char*);
//char* (*pf2[4])(char*, const char*);

//函数指针数组的用途：转移表

//实现计算器：

void menu()
{
	printf("********************************\n");
	printf("**** 1.Add ******** 2.Sub ******\n");
	printf("**** 3.Mul ******** 4.Div ******\n");
	printf("************ 0.exit *************\n");
	printf("********************************\n");
}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int	Mul(int x, int y)
{
	return x * y;
}
int	Div(int x, int y)
{
	return x / y;
}

//int main()
//{
//	int input = 0;
//	int a = 0;
//	int b = 0;
//
//	do
//	{
//		menu();
//		printf("Please type:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("Please type numbers:>");
//			scanf("%d %d", &a, &b);
//			printf("%d\n", Add(a, b));
//			break;
//		case 2:
//			printf("Please type numbers:>");
//			scanf("%d %d", &a, &b);
//			printf("%d\n", Sub(a, b));
//			break;
//		case 3:
//			printf("Please type numbers:>");
//			scanf("%d %d", &a, &b);
//			printf("%d\n", Mul(a, b));
//			break;
//		case 4:
//			printf("Please type numbers:>");
//			scanf("%d %d", &a, &b);
//			printf("%d\n", Div(a, b));
//			break;
//		case 0:
//			printf("exiting...");
//			break;
//		default:
//			printf("Please type again");
//			break;
//		}
//
//	} while (input);


//函数简化：--转移表
//int main()
//{
//	int input = 0;
//	int a = 0;
//	int b = 0;
//	int(*parr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("Please choose:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("Please give two numbers:>");
//			scanf("%d %d", &a, &b);
//			printf("%d\n", parr[input](a, b));
//		}
//		else if (input == 0)
//		{
//			printf("exiting...");
//		}
//		else
//		{
//			printf("Please choose again\n");
//		}
//	} while (input);
//	return 0;
//}


//回调函数：通过函数指针调用的函数，当把函数的指针（地址）作为参数传给另一个函数，当这个指针被用来调用时，我们就说这是回调函数
//例：还是使用上面的加减乘除4个函数

//void huidiao(int (*pf)(int, int))
//{
//	int a = 0;
//	int b = 0;
//	printf("Please type numbers:>");
//	scanf("%d %d", &a, &b);
//	printf("%d\n", (*pf)(a, b));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("Please type:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			huidiao(Add);
//			break;
//		case 2:
//			huidiao(Sub);
//			break;
//		case 3:
//			huidiao(Mul);
//			break;
//		case 4:
//			huidiao(Div);
//			break;
//		case 0:
//			printf("exiting...");
//			break;
//		default:
//			printf("Please type again");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

//指向函数指针数组的指针
//指向  函数指针数组  的指针：一个指针 指向了一个数组  这个数组的元素是函数指针

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int (*p)[5] = &arr;//指向数组的指针
//
//	int (*parr[4])(int, int) = { Add };
//	int(*(*pparr)[4])(int, int) = &parr;
//	//pparr是一个指针，该指针指向了一个含有4个元素的数组，元素的类型为函数指针；
//}

//回调函数续：
//void Print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void (*p)(char*))
//{
//	printf("test");
//	p("nicot");//给Print传参
//}
//int main()
//{
//	test(Print);
//	return 0;
//}



//下节课预告：
//冒泡排序：之前的冒泡排序函数只能排序整形数组
