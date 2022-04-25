#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

int main()
{
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//整个数组的大小
	printf("%d\n", sizeof(a + 0));//首元素地址大小
	printf("%d\n", sizeof(*a));//首元素大小
	printf("%d\n", sizeof(a + 1));//第二个元素地址大小
	printf("%d\n", sizeof(a[1]));//第二个元素的大小
	printf("%d\n", sizeof(&a));//数组地址的大小
	printf("%d\n", sizeof(*&a));//整个数组的大小

	printf("%d\n", sizeof(&a+1));//地址跳过了整个数组，但是&a+1还是地址
	printf("%d\n", sizeof(&a[0]+ 1));//第二个元素地址的大小
	return 0;
}
