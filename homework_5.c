#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//1.��ϰð������  array_1�и���ϸ�Ľ��
//�÷�����ȱ�㣬j���������˸���εĸ�ֵ

//int main()
//{
//	int arr[12] = { 1, 8, 9, 5, 6, 2, 4, 7,11,18,9,55 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < sz;i++)
//	{
//		for (j = i+1;j <sz;j++)//��i�����͵�i�������������Ƚϴ�С
//		{
//			if (arr[i] < arr[j])//��i������ֵΪ��i������������ֵ������һ��
//			{
//				int temp = 0;
//				temp = arr[i];
//				arr[i] = arr[j];//�����ֵ����i
//				arr[j] = temp;
//			}
//		}
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//2.�������������һ���������飬��ɶ�����Ĳ���
// ʵ�ֺ���init()����ɶ�����ĳ�ʼ����
// ʵ��printf()����ɶ�����ÿһ��Ԫ�صĴ�ӡ
// ʵ��reverse(),��ɶ�����Ԫ�ص�����
//Ҫ���Լ��������Ϻ����Ĳ����ͷ���ֵ

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

//3.������A�к�����B�е�Ԫ�ؽ��н����������Сһ��
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

//%x��ӡ16����λ����
int i;//ȫ�ֱ�����δ��ʼ����Ĭ��Ϊ0������Ϊ�ֲ����������
int main()
{
	i--;
	if (i > sizeof(i))//��һ���������޷��������Ƚ�ʱ��������Ҳ�����޷�������-1�Ĳ���Ϊ11111....11111����Ϊ�����������һ����ӡԭ�뼴Ϊ11111...11111
	{
		printf(">\n");
	}
	else
		printf("<\n");
	return 0;
}


