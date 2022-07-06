#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//枚举

enum sexuality//枚举的类型
{
	//枚举的可能取值--也叫枚举常量，枚举成员默认值从0开始，依次递增
	lesbian,
	gay,
	bisexual,
	transgender,
	pansexual,
	asexual,
	queer
};//给枚举常量赋值后，在main函数里面不能够再赋值

//int main()
//{
//  enum sexuality fu= bisexual;
//	printf("%d,%d,%d", lesbian, gay, bisexual );
//	return 0;
//}

//可以使用#define 定义常量

#define lesbian 1

//int main()
//{
//	int fuyu = lesbian;
//	printf("%d", fuyu);
//	return 0;
//}


//比起#define常量定义，枚举的优点
//1.可维护性和可读性更高
//2.与#define定义的标识符相比，枚举有类型检查，比较严谨
//3.防止了命名污染（封装）/命名冲突
//4.便于调试
//5.使用方便，一次可定义多个常量。
//enum sexuality fu= bisexual;只能用枚举常量给枚举变量赋值，才不会出现类型差异



//联合
//AKA联合体，共同体(联合的成员共用了同一块空间）

//union nicot
//{
//	char who;
//	int how;
//};
//
//int main()
//{
//	union nicot fu;
//	printf("%d\n", sizeof(fu));
//	printf("%p\n", &fu);
//	printf("%p\n", &(fu.who));
//	printf("%p\n", &(fu.how));
//
//	return 0;
//}
//联合体的大小，至少是最大成员的大小

//应用：判断内存的大小端存储

//老办法
//int check_yes()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//新办法
//int check_yes()
//{
//	union daxiao
//	{
//		char a;
//		int b;
//	}u;
//	u.b = 1;
//	return u.a;
//}
//int main()
//{
//	int a = 1;
//	int ret = check_yes();
//
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//联合体大小的计算
//联合的大小至少是最大成员的大小。
//当最大成员大小不是最大对齐数的整数倍时，就要对齐到最大对齐数的整数倍
//char arr[5]最大对齐数是1