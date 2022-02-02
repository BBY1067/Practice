#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//在已知的一个“有序”数列中找到数字7
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int tar = 10;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1;i<sz; i++)
//	{
//		if (tar == arr[i])
//		{
//			printf("下标是%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("not found\n");
//	return 0;
//}

//二分查找算法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int tar = 7;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (tar < arr[mid])
//			right = mid - 1;
//		else if (tar > arr[mid])
//			left = mid + 1;
//		else
//		{
//			printf("下标为%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("not found");
//	return 0;
//}
