#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<math.h>
//1.дһ�������ж��ǲ�������

//void panduan(int a)
//{
//	int b = 0;
//	for (b = 2;b <= sqrt(a);b++)
//		if (a % b == 0)
//		{
//			printf("%d��������", a);
//			break;
//		}
//	if (b>sqrt(a))
//			printf("%d������", a);
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

 //��ӡ100-200������

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

//2.дһ�������ж��ǲ�������

//��ӡ1000-2000�������

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

//дһ������,ʵ�������������ж��ֲ���

int look(int arr[],int i,int sz)//arrʵ�����Ǹ�ָ��
{
	
	/*int sz = sizeof(arr) / sizeof(arr[0]);*///������������С
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
	int ret=look(arr,i,sz);//���������������һ�����ĵ�ַ
	if (ret == -1)
		printf("not found");
	else
		printf("found, low mark is %d", ret);
	return 0;
}