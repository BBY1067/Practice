#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

//内置类型：c语言自己的数据类型
//自定义数据类型：结构体，枚举体，联合

//1.结构体

//结构体变量的声明形式
/*struct tag
{
	member-list;
};variable-list;*/

struct partner
{
	char name[10];
	char gender[10];
	int salary;
	int workyear;
};p1, p2, p3, p4, p5;//创建的全局变量

//声明的时候可以不完全声明->匿名结构体（省略了结构体标签tag）
struct
{
	int a;
	char b;
	float c;
}x;//这个时候必须要跟个变量，不然这个结构体真的隐居了

struct
{
	int a;
	char b;
	float c;
}*p;
//此时若使用p=&x，则会出现语法错误，因为即使两个结构体成员一样，编译器仍会认为这是两个不同的地址




