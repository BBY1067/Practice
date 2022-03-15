#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<math.h>
//1.复习冒泡排序  array_1有更详细的解答
//该方法的缺点，j变量接受了更多次的赋值

//int main()
//{
//	int arr[12] = { 1, 8, 9, 5, 6, 2, 4, 7,11,18,9,55 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < sz;i++)
//	{
//		for (j = i+1;j <sz;j++)//第i个数和第i个数后面的数相比较大小
//		{
//			if (arr[i] < arr[j])//第i个数的值为第i个数后面所有值中最大的一个
//			{
//				int temp = 0;
//				temp = arr[i];
//				arr[i] = arr[j];//将最大值赋给i
//				arr[j] = temp;
//			}
//		}
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//2.数组操作：创建一个整数数组，完成对数组的操作
// 实现函数init()，完成对数组的初始化；
// 实现printf()，完成对数组每一个元素的打印
// 实现reverse(),完成对数组元素的逆置
//要求：自己设置以上函数的参数和返回值

#include "homework_5.h"

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);
//	reverse(arr,sz);
//	print(arr, sz);
//	address(arr, sz);
//	return 0;
//}

//3.将数组A中和数组B中的元素进行交换，数组大小一样
//int main()
//{
//	int arr1[10] = { 11,22,33,44,55,66,77,88,99,100 };
//	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	print(arr1, sz);
//	print(arr2, sz);
//	return 0;
//}

//%x打印16进制位数字
//int i;//全局变量，未初始化，默认为0（设置为局部变量会出错）
//int main()
//{
//	i--;
//	if (i > sizeof(i))//当一个整数和无符号数做比较时，把整数也当作无符号数：-1的补码为11111....11111，变为符号数三码合一，打印原码即为11111...11111
//	{
//		printf(">\n");
//	}
//	else
//		printf("<\n");
//	return 0;
//}

//4.统计二进制中（补码）1的个数 见operator_1，与操作符相关
#include<stdlib.h>
//常规算法

//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
	//当a为整数时
//while (a)
//{
//if (a % 2 == 1)
//	{
//		count++;
//	}
//		a = a / 2;
//}
	//当a为负数时，上述方法出现错误，因为负数原反补不相同
	//-1储存在内存中
	//原码1000000000001
	//反码1111111111110
	//补码1111111111111，使用按位与
	//int i = 0;
	//for (i = 0;i < 32;i++)
	//{
	//	if (1 == ((a >> i) & 1))
	//		count++;
	//}
//	system("pause");
//	printf("二进制中1的个数为%d", count);
//	return 0;
//}

//奇怪算法

//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	while (a)
//	{
//		a = (a & (a - 1));
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//5.求二进制位中不同位的个数：两个int整数m和n的二进制中，有多少个位bit不同

//int main()
//{
//	int m = 0;//10:0110
//	int n = 0;//13:1101
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	int count = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if ((m >> i) ^ (n >> i) == 1)//也可以使用上述奇怪算法：m^n后，计算值的二进制中1个个数。
//			count++;
//	}
//	printf("有%d个bit不同\n",count);
//	return 0;
//}

//5.交换2进制中的奇数位和偶数位：获取一个整数的二进制中的所有奇数位和偶数位，分别打印出二进制序列

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	//打印奇数位：从左到右打印 移动30到0位
//	printf("奇数位\n");
//	for (i = 30;i >=0;i-=2)
//	{
//		printf("%d", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位\n");
//	for (i = 31;i >= 1;i -= 2)
//	{
//		printf("%d", (a >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}

//6.交换两个变量（整数），不允许创建临时变量

//

//7.用指针打印数组内容，不使用下标

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//8.实现一个函数，判断一个数是不是素数；利用上面的函数打印100到200的素数
//素数除了自己和本身都不能被其他数整除

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	prime(a);
//	int i = 0;
//	int j = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		for (j = 2;j <= sqrt(i);j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j> sqrt(i))
//			printf("%d  ", i);
//	}
//	return 0;
//}

//9.打印乘法口诀表，创建一个函数，输入12 则得到12*12的乘法口诀表

//void multitable(int a)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1;i <= a;i++)
//	{
//		for (j = 1;j <= i;j++)
//		{
//			int r = i * j;
//			printf("%d*%d=%-2d   ", i, j, r);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	multitable(a);
//	return 0;
//}

//10.递归方式打印函数的每一位
//void intprint(int num)
//{
//	if (num > 9)
//	{
//		intprint(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	intprint(num);
//	return 0;
//}

//11.递归和非递归分别实现n的阶乘

//非递归
//int main()
//{
//	int num = 0;
//	int rcp = 1;
//	scanf("%d", &num);
//	while (num >1)
//	{
//		rcp= rcp * num;
//		num--;
//	}
//	printf("%d", rcp);
//	return 0;
//}

//递归
int factorial(int num)
{
	int a = 0;
	if (num > 1)
	{
		num=num*factorial(num - 1);
	}
	return num;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int rcp=factorial(num);
	printf("%d", rcp);
}


