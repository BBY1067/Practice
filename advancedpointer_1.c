#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//ָ��Ľ���

//1.һЩСϸ��
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);//�˴���ʹ��*pc��ԭ��%s�Ǵ�ӡ�ַ��������ֵ�����������ַ��ĵ�ַ������pc=arr
//	return 0;
//}

//int main()
//{
//	char* p = "abcedf";//�˴�abcedf��һ�������ַ���,p�洢�������ַ�a�ĵ�ַ,��ü�const��const char* p
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "abc";//��arr2��ַ����ͬ
//	const char* p1 = "abc";
//	const char* p2 = "abc";//p1��p2��ַ��ͬ����ΪabcΪһ�������ַ�����p1��p2���洢��ͬһ���ַ��������ַ���ַ
//	//ע��p1��p2�ĵ�ַ��ͬ������ָ��ĵ�ַ��ͬ
//	
//	return 0;
//}

//2.ָ�����飺�������ָ�������
//ָ��������ƺţ�ָ����������ί�ᣬ���������ֵ������ƺ�

//ָ�������С����
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//}

//int* arr[10]:����ָ�������
//char *arr[4];һ���ַ�ָ�������
//char *arr[5]:�����ַ�ָ�������
