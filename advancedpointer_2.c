#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//数组指针-指针


//3.数组指针：->指针

//int* a = NULL;//a是一个整形指针->指向整型的指针->存放整形的地址
//char* b = NULL;//b是一个字符指针->指向字符的指针->存放字符的地址

//int arr[10] = { 0 };
//arr-首字符的地址
//&arr[0]-首字符的地址
//&arr-数组的地址
// 
//int(*p)[10] = &arr;//*p是一个数组指针->指向数组的指针->存放数组的地址
//[]的优先级高于*，所以需要括号，在定义变量步骤中*不是解引用的意思，而是表示p是一个指针。

//比较：
//int *p[10]; 存放指针的数组
//int(*p)[10]; 存放数组地址的指针

//例：
//int main()
//{
//	char* arr[10];//存放字符指针的数组
//	pa = &arr;//存放字符指针的数组的地址，所以pa是数组指针 arr={p1,p2
//	char* (*pa)[10];//char* arr是存放了10个字符指针的数组，pa存放数组地址，数组里面的元素是字符型指针，所以用char*
//
//	//例
//	int arr[10];
//	int(*pa)[10] = &arr;
//	return 0;
//}



//4.数组指针的应用
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	printf("\n第二种\n");
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", *(*pa + i));
//	}
//	return 0;
//}

//为什么需要这么做 也可以直接int* p=arr;