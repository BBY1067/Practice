#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//打印数组的地址
//int main()
//{
//	int i = 0;
//	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		int a=&arr[i];
//		printf("arr[%d]=%p\n", i, a);
//	}
//	return 0;
//}

//打印二维数组的地址
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8 };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 4;j++)
//		{
//			printf("arr[%d][%d]=%p\n",i,j,&arr[i][j]);
//		}
//	}
//	return 0;
//}

//冒泡排序
//void bubble(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz-1;i++)//确定冒泡排序的趟数，例如10个数排序只需要排九个数
//	{
//		int flag = 1;//假设数组已经按顺序排列
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)//每趟需要对比的次数，例如第二趟只用对比8次就可
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tem;
//					flag = 0;//数组没有按照顺序排列，赋值
//			}
//			if (flag == 1)//第一趟数组即按顺序排列，没有进入循环被赋值，退出循环
//				break;//break只能用于for，switch之类的语句，不能用于if，但是if如果在循环语句中出现，则可以使用
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr,sz);
//	int a = 0;
//	for (a = 0;a < sz;a++)
//	{
//		printf("%d", arr[a]);
//	}
//	return 0;
//}

//数组名
int main()
{
	int arr[] = { 1,2,3,4,5 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);
	printf("%d\n", *arr);
	printf("%d\n", sizeof(arr));
	return 0;
}