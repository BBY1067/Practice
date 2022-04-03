#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//数据类型分为两种：
//1.内置类型 ：char long int ...float(单精度浮点数） double(双精度浮点数）
//2.自定义类型(构造类型）
//
//int main()
//{
//	int a = 10;
//	float f = 10.0;//与int的字节数相同，但是占用的内存不一样
//	return 0;
//}

//类型的意义：
//1.使用这个类型开辟内存空间的大小
//2.如何看待内存空间的视角


//类型的基本归类！！！！

//整型家族：每个类型都有unsignd和signed两种（是否有符号位）1.char：（char存的是ASCII码值，一个个整数，所以为整型）2.short  3.int  4.long
//浮点型家族：1.float  2.double
//构造类型：1.数组类型  2.结构体类型  3.枚举类型（enum）  4.联合类型（union）
//指针类型：1.int *pi   2.char *pc   3.float *pf  4.void *pv
//空类型：void表示空类型


//数据存储模式
//大端：内存正着存   小端：内存反着存

//练习

//1.设计一个小程序来判断当前机器的字节序
//int main()
//{
//	int a = 1;
//	char* i = (char*)&a;//强制转换类型
//	if (*i == 1)
//		printf("小端");
//	else
//		printf("大端");
//	return 0;
//}

//以上程序可封装成函数，返回值1 小端，返回值0 大端。
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	//if (*p == 1)
//	//	return 1;
//	//else
//	//	return 0;
//	return *p;//简化
//
//	//极端浓缩 return *(char*)&a;
//}
//int main()
//{
//	int ret=check_sys();
//	if (ret == 1)
//		printf("小端");
//	else
//		printf("大端");
//	return 0;
//}

//2.下面程序如何输出
//int main()
//{
//	char a = -1;
//	//补码：1111111...11111111
//	//char:11111111
//	signed char b = -1;
//	//补码：1111111....1111111
//	//signed char：11111111
//	unsigned char c = -1;
//	//补码1111111...1111111
//	//unsigned char：11111111
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	//答案为-1，-1，255（发生了整型提升），a，b补1
//	//其中c：前面补0，变为000000000000...0011111111=255
//	return 0;
//}

//3.下面的程序如何输出
//int main()
//{
//	char a= -128;
//	//二进制序列：1000000....1000000
//	//补码111111111111111..10000000；
//	//char：10000000；
//	//整型提升后：111111111...110000000；
//	//%u：认为原返补相同，打印111111..100000000；
//	//%d：认为是负数，打印10000000..10000000；
//	printf("%u", a);//%u:打印十进制的无符号数字；%d：打印十进制的有符号数字
//	return 0;
//}


//4.下面的程序如何输出（Sleep函数的运用）
//由于该函数运行后为死循环那样的界面，所以可以用Sleep函数，帮助查看循环中有什么数字
#include<windows.h>
//int main()
//{
//	unsigned int i = 0;
//	for (i = 9;i >= 0;i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);//100ms=0.1s
//	}
//	return 0;
//}

int main()
{
	char a[1000];
	int i;
	for (i = 0;i < 1000;i++)
	{
		a[i] = -1 - i;//a的类型为char，所以范围只能是-128到127之间的值，所以等于数字0的时候，结束strlen的统计
	}
	printf("%d\n", strlen(a));//255
	return 0;
}

