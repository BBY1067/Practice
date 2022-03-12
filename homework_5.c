#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
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
int i;//全局变量，未初始化，默认为0（设置为局部变量会出错）
int main()
{
	i--;
	if (i > sizeof(i))//当一个整数和无符号数做比较时，把整数也当作无符号数：-1的补码为11111....11111，变为符号数三码合一，打印原码即为11111...11111
	{
		printf(">\n");
	}
	else
		printf("<\n");
	return 0;
}


