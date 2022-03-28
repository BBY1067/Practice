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

