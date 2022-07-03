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

//struct partner
//{
//	char name[10];
//	char gender[10];
//	int salary;
//	int workyear;
//};p1, p2, p3, p4, p5;//创建的全局变量
//
////声明的时候可以不完全声明->匿名结构体（省略了结构体标签tag）
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;//这个时候必须要跟个变量，不然这个结构体真的隐居了
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}*p;
//此时若使用p=&x，则会出现语法错误，因为即使两个结构体成员一样，编译器仍会认为这是两个不同的地址
//匿名结构体只能用一次，后不能再用


//2.结构体的自引用
//(链表结构)

//struct node
//{
//	int data;
//	struct node next;//错误的自引用方式： Sizeof（sturct node）太大
//};

//正确的自引用方式

//struct node
//{
//	int data; //4 byte
//	struct node* next;// 4/8 byte
//};


//对上面的结构体类型进行重命名

typedef struct node
{
	int data; //4 byte
	struct node* next;// 4/8 byte
}node;//自引用时最好不要使用匿名



//3.结构体变量的定义和初始化
//struct client
//{
//	char name[10];
//	double month;
//	char contry[20];
//};
//typedef struct member
//{
//	char name[10];
//	int age;
//	int salary;
//	struct client c1;
//}member;
//
//int main()
//{
//	member m1 = { "yv",28,30000,{"AVA",1.33,"Russia"}};
//	printf("%s\n%d\n%d\n%s\n%lf\n%s\n", m1.name, m1.age, m1.salary, m1.c1.name, m1.c1.month, m1.c1.contry);
//	return 0;
//}


//4.结构体内存对齐

struct s
{
	char a;
	int b;
	char c;
};

struct c
{
	char a;
	char b;
	int c;
};
struct e
{
	char a;
	int c;
	struct c c1;
};

//int main()
//{
//	struct s s1 = { 0 };
//	struct c c1 = { 0 };
//	struct e e1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(c1));
//	printf("%d\n", sizeof(c1));
//	return 0;
//}

//结构体的对齐规则（结构体会“浪费”掉一些内存）
//1.第一个成员在与结构体变量偏移量为0的地址处
//2.其他成员变量要对其到某个数字(对齐数)的整数倍的地址处（比如c1结构体中的Int c对齐到起始地址+4的地方开始）

//对齐数：编译器默认的一个对齐数 与 该成员大小的较小值，vs中默认为8
//3.结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍!!!!!!!!!!!!!!!!!!!!!!!!!!
//4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整倍数处，
//结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍

//为了方便读取
//奇妙比喻：就像图书馆放书，不能挨着挨着放，不好找
//总结：结构体对齐，就是牺牲空间，节约时间
//->在设计结构体的时候，如何既要对齐，又要节约空间：让占用空间小的成员尽量集中在一起


//5.修改默认对齐数 #pragma预处理指令

#include<stddef.h>//使用offsetof

#pragma pack(4)//设置默认对齐数为4
struct n
{
	char a;
	int b;
	double c;
};
#pragma pack()//取消设置的默认对齐数
//默认对齐数为1的话，就变成挨着挨着放了


//6.offsetof宏：结构体成员相对于结构体起始位置的偏移量是多少

//int main()
//{
//	printf("%d",offsetof(struct n, c));
//	return 0;
//}


//7.结构体传参

void init(struct n* p)
{
	p->a = 'c';
	p->b = 2;
	p->c = 3.14;
}
void print1(struct n nn)
{
	printf("%c %d %lf", nn.a, nn.b, nn.c);
}
void print2(struct n* p)
{
	printf("%c %d %lf", p->a, p->b, p->c);
}
int main()
{
	struct n n1 = { 0 };
	init(&n1);
	print1(n1);
	print2(&n1);//2最好，结构体过大，参数压栈的系统开销比较大，1可能会造成性能下降
	return 0;
}