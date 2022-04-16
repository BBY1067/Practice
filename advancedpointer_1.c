#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//指针的进阶

//1.一些小细节
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);//此处不使用*pc的原因：%s是打印字符串，这个值本质上是首字符的地址，所以pc=arr
//	return 0;
//}

//int main()
//{
//	char* p = "abcedf";//此处abcedf是一个常量字符串,p存储的是首字符a的地址,最好加const：const char* p
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "abc";//与arr2地址不相同
//	const char* p1 = "abc";
//	const char* p2 = "abc";//p1和p2地址相同，因为abc为一个常量字符串，p1和p2都存储的同一个字符串的首字符地址
//	//注：p1和p2的地址不同，它们指向的地址相同
//	
//	return 0;
//}

//2.指针数组：用来存放指针的数组
//指针就是门牌号，指针数组就像居委会，放着整个街道的门牌号

//指针数组的小运用
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//}

//int* arr[10]:整形指针的数组
//char *arr[4];一级字符指针的数组
//char *arr[5]:二级字符指针的数组
