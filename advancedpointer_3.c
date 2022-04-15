#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

//指针数组和数组指针的传参

//1.一维数组的传参
//void test1(int arr[10])//10可以省略
//{}
//void test2(int* p)
//{}
//void test3(int* arr)
//{}
//void test4(int **p)
//{}
//
//int main()
//{
//	int arr1[10];
//	int* arr2[10];
//	test1(arr1);
//	test2(arr1);
//	test3(arr2);
//	test4(arr2);
//}

//2.二维数组的传参
//二维数组传参时，只能省去行数:[][x];列数=首元素地址（第一行元素的地址）包含几个元素

//void test1(int arr[][5])
//{}
//void test2(int(*arr)[5])
//{}
////void test3(int*)
//int main()
//{
//	int arr1[3][5];
//	test1(arr1);
//	test2(arr1);
//}

//3.一级指针的传参
//void poin(int *p)//当参数为int *p时，可能接收的时一维数组 或者取地址& 或者指针
//{}
//int main()
//{
//	int arr[5] = { 0 };
//	int* p = arr;
//	poin(p);
//	return 0;
//}


//4.二级指针传参
//void test(int** pp)//接受一级指针变量的地址或者是二级指针  或者是指针数组！！
//{
//	printf("num=%d\n", **pp);
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p = arr;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}


//5.函数指针：指向函数的指针(存放函数地址的指针）

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Add(a, b);
//	printf("%p\n", &Add);//&函数名 和 函数名是一个东西，都是函数的地址
//	printf("%p\n", Add);
//	int(*pA)(int,int) = Add;//函数指针
//	//证明
//	int i=(*pA)(2, 3);
//	printf("%d\n", i);
//	
//	return 0;
//}

void Print(char* line)
{
	printf("%s\n", line);
}

int main()
{
	void (*p)(char*) = Print;
    (*p)("nicot");
	return 0;
}

//两段有趣的代码

//代码1
(*(void(*)())0)();
//代码2
void(*signal(int, void(*)(int)))(int);