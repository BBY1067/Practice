#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//整个数组的大小
//	printf("%d\n", sizeof(a + 0));//首元素地址大小
//	printf("%d\n", sizeof(*a));//首元素大小
//	printf("%d\n", sizeof(a + 1));//第二个元素地址大小
//	printf("%d\n", sizeof(a[1]));//第二个元素的大小
//	printf("%d\n", sizeof(&a));//数组地址的大小
//	printf("%d\n", sizeof(*&a));//整个数组的大小
//
//	printf("%d\n", sizeof(&a + 1));//地址跳过了整个数组，但是&a+1还是地址
//	printf("%d\n", sizeof(&a[0] + 1));//第二个元素地址的大小
//
//	char arr2[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr2));//随机值，因为遇到/0结束
//	printf("%d\n", strlen(arr2 + 0));//随机值
//	printf("%d\n", strlen(*arr2));//error非法访问内存，strlen需要接受一个地址
//	printf("%d\n", strlen(arr2[1]));//error
//	printf("%d\n", strlen(&arr2));//从第一个地址开始数
//	printf("%d\n", strlen(&arr2 + 1));//从数组结束后开始数，与上一个随机值差值为一个数组的字节
//	printf("%d\n", strlen(&arr2[0] + 1));//从数组的第二个元素的地址开始数，数到/0结束
//
//	return 0;
}
