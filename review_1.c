#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
//1.��������int������ֵ������ʹ�õ�����int����

//int main()
//{
//	int a = 5;
//	int b = 3;
//	INT_MAX;// int 4�ֽ� 32bitλ ���ֵ2147483647
//	//����������������
//	//a = a + b;
//	//b = a - b;//b����ԭ����b ��b=a
//	//a = a - b;//a�õ�ԭ����b
//
////��λ����߼��㷨��������������
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	
//	printf("a=%d  b=%d\n",a,b);
//	return 0;
//}

//2.�ҳ�ֻ����һ�ε��� ������һ���ǿ��������飬ֻ��һ��Ԫ��ֻ������һ�Σ�����Ԫ�س���������
//
//�����ⷨ��ѭ����������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0;
//	int j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	for (i = 0;i < sz;i++)
//	{
//		int count = 0;
//		for (j = 0;j < sz;j++)
//		{
//			if (arr[i] == arr[j])
//				count++;
//		}
//		if (count == 1)
//		{
//			printf("Ψһ��Ԫ��=%d", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}
//
////���
////a^a=0  0^a=a  a^b^c=a^c^b (����˷������ɣ�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int ret = 0;
//	for (i = 0;i < sz;i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("Ψһ��Ԫ��=%d", ret);
//	return 0;
//}
//
////3.�ػ���Ϸ
int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 120");
	again:
	printf("���������2���Ӻ�رգ��������'����������\n");
	scanf("%s", &arr);
	if (strcmp(arr, "������") == 0)
		system("shutdown -a");
	else
		goto again;
	return 0;
}