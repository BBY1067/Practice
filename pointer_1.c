#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//指针类型的区别：1.解引用操作时能够访问空间的大小  2.指针的步长
//int main()
//{
//	int a = 0x11223344;//16进制数，每一个16进制数都可以转换为一个四位的2进制数，11 8个bit，1个字节；22同理；共32 bit，4个字节
//	int* pa1 = &a;
//	char* pa2 = &a;
//	double* pa3 = &a;
//	printf("打印不同类型\n");
//	printf("%p\n",pa1);
//	printf("%p\n", pa2);
//	printf("%p\n", pa3);
//	//解引用操作访问空间大小：
//	*pa1 = 0;
//	*pa2 = 0;
//	*pa3 = 0;
//	printf("\n通过解引用操作改变指针变量\n");
//	printf("%p\n", pa1);
//	printf("%p\n", pa2);
//	printf("%p\n", pa3);
//	printf("\n测试指针的步长\n");
//	printf("%p\n", pa1+1);
//	printf("%p\n", pa2+1);
//	printf("%p\n", pa3+1);
//	return 0;
//}

//指针步长的应用
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//指针的运算：指针-指针求得字符串的长度 （递归法在function_3_recursion中）
int length(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
	char arr[] = "bit";
	int len = length(arr);
	printf("长度为%d", len);
	return 0;
}