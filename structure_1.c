#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//1.结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量
//因为生活中出现的对象往往是一个复杂对象，不能只单用int float char 来描述，所以有了结构体概念

//描述一个学生：名字，年龄，电话，性别
//struct是结构体关键字  stu是结构体标签 struct stu是结构体类型

//struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char gender[5];
//}s1,s2,s3;//定义了一个结构体类型，未占据内存空间
//此时又定义了变量，s1，s2，s3是三个全局的结构体变量

//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char gender[5];
//}stu;//重新命名struct stu 为stu
//int main()
//{
//	struct stu fu;//创建结构体变量，局部的结构体变量 
// }

//2.结构成员的类型：可以是标量、数组、指针甚至是其他结构体

//结构体中包含结构体
//struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char gender[10];
//};
//
//struct class
//{
//	struct stu s;//包含结构体
//	int population;
//	int grade;
//	char classname[10];
//};
//int main()
//{
//	struct class c = { {"fuyu",22,"123456789","female"},55,2,"happy"};
//	printf("%s\n", c.s.name);//打印结构体中的结构体
//	printf("%d\n", c.population);
//	return 0;
//}

//3.结构体成员的访问：./->
//结构体传参
//函数传参的时候，参数是需要压栈（插入一个元素叫压栈，与此相对的叫出栈）的，如果传递一个结构体对象的时候，
//结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降
typedef struct stu
{
	char name[10];
	int age;
	char gender[10];
}r;
void print1(r tmp)//结构体名字访问用成员“.”
{
	printf("name=%s\n", tmp.name);
	printf("age=%d\n", tmp.age);
	printf("gender=%s\n", tmp.gender);
}
void print2(r* s)//结构体指针访问成员用“->”
{
	printf("name=%s\n", s->name);
	printf("name=%d\n", s->age);
	printf("name=%s\n", s->gender);
}
int main()
{
	r s1={ "nicot",20,"女" };
	print1(s1);
	print2(&s1);
	return 0;
}
//结论：结构体传参要穿结构体的地址


