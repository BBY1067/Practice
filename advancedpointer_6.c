#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//��ϰð������ ->�����ص�����qsort

//void Bubblesort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz-1;i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0;j < sz -1- i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubblesort(arr, sz);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//ð������ֻ������
// 
//�����һ���ṹ�����飬����αȽϣ�
//struct stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct stu s[3] = { {"da",20},{"fu",22},{"wa",30}};
//	return 0;
//}
//qsort-�⺯��-����quick sort����MSDN����



//void qsort(void* base,//Ŀ���������ʼλ��
//	size_t num,//����Ԫ�صĴ�С
//	size_t width,//Ԫ�ص��ֽڣ���sizeof
//	int(*compare)(const void* elem1, const void* elem2)
//	//elem1��2����Ҫ�Ƚ�����Ԫ�صĵ�ַ���ұȽϺ�����Ҫ��
//);

//->void*��������ָ�룬p���������⣬˭���ܷţ�
//���Ƕ���void*���͵�ָ���ǲ��ܽ��н����ò����ģ�Ҳ���ܽ���+-�����Ĳ���
#include<stdlib.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void test()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	test();
	return 0;
}