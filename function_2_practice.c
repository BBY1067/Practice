#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<math.h>
//1.写一个函数判断是不是素数

//void panduan(int a)
//{
//	int b = 0;
//	for (b = 2;b <= sqrt(a);b++)
//		if (a % b == 0)
//		{
//			printf("%d不是素数", a);
//			break;
//		}
//	if (b>sqrt(a))
//			printf("%d是素数", a);
//}
//int main()
//{
//	int i = 1;
//	while (i)
//	{
//		scanf("%d\n", &i);
//		panduan(i);
//	}
//	return 0;
//}

 //打印100-200的素数

//int panduan(int a)
//{
//	int b = 0;
//	for (b = 2;b <= sqrt(a);b++)
//	{
//		if (a % b == 0)
//		{
//			return 0;
//			break;
//		}
//	}
//	if (b > sqrt(a))
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		if (panduan(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//2.写一个函数判断是不是闰年

//打印1000-2000年的闰年

//int leap(int i)
//{
//	/*if (i % 4 == 0)
//	{
//		if (i % 100 == 0)
//			return 0;
//		else if (i % 400 == 0)
//			return 1;
//		else
//			return 1;
//	}*/
//	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int s = 0;
//	int count = 0;
//	for (s = 1000;s <= 2000;s++)
//	{
//		if (leap(s) == 1)
//		{
//			printf("%d ", s);
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//写一个函数,实现整数有序序列二分查找

int look(int arr[],int i,int sz)//arr实际上是个指针
{
	
	/*int sz = sizeof(arr) / sizeof(arr[0]);*///不能求得数组大小
	int left = 0;
	int right = sz - 1;
	int mid = (left + right) / 2;
	while (left <= right)
	{
		if (i > arr[mid])
			left = mid + 1;
		else if (i < arr[mid])
			right = mid - 1;
		else
			return mid;
	}
	if (left > right)
		return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	scanf("%d", &i);
	int ret=look(arr,i,sz);//仅仅传的是数组第一个数的地址
	if (ret == -1)
		printf("not found");
	else
		printf("found, low mark is %d", ret);
	return 0;
}