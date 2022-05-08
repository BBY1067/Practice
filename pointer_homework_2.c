#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int*ptr = (int*)(&a + 1);//(&a+1)是数组地址，应该放到数组指针去，所以强制类型转换
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char* pcname;
//	short sDate;
//	char chap[2];
//	short SBA[4];
//}*p;
//假设p的值为0x100000，如下表达式的值分别为多少
//已知结构体变量的大小是20个字节

//int main()
//{
//	p =(struct Test*) 0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);//unsigned long将p转化为整数，16进制->10进制，运算+1再转化为16进制数，实实在在的+1，%p会输出16进制
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

int main()
{
	//1.
	//int a[4] = { 1,2,3,4 };
	//int* ptr1 = (int*)(&a + 1);
	//int* ptr2 = (int*)((int)a + 1);//(int)a+1 向后偏移一个字节->1开头的地址向后一个字节
	//printf("%x,%x", ptr1[-1], *ptr2);//*(ptr1+(-1))
	//%x表示是用16进制进行打印输出


	//2.
	//int a[3][2] = { (0,1),(2,3),(4,5) };//!!逗号表达式是最后一个结果
	//int* p;
	//p = a[0];//第一行数组名，此时该数组真实排列为{(1,3)(5,0)(0,0)};
	//printf("%d", p[0]);//p[0]=*(p+0)

	//3.
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}
