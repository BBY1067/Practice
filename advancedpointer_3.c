#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

//ָ�����������ָ��Ĵ���

//1.һά����Ĵ���
//void test1(int arr[10])//10����ʡ��
//{}
//void test2(int* p)
//{}
//void test3(int* arr)
//{}
//void test4(int **p)
//{}
//
//int main()
//{
//	int arr1[10];
//	int* arr2[10];
//	test1(arr1);
//	test2(arr1);
//	test3(arr2);
//	test4(arr2);
//}

//2.��ά����Ĵ���
//��ά���鴫��ʱ��ֻ��ʡȥ����:[][x];����=��Ԫ�ص�ַ����һ��Ԫ�صĵ�ַ����������Ԫ��

//void test1(int arr[][5])
//{}
//void test2(int(*arr)[5])
//{}
////void test3(int*)
//int main()
//{
//	int arr1[3][5];
//	test1(arr1);
//	test2(arr1);
//}

//3.һ��ָ��Ĵ���
//void poin(int *p)//������Ϊint *pʱ�����ܽ��յ�ʱһά���� ����ȡ��ַ& ����ָ��
//{}
//int main()
//{
//	int arr[5] = { 0 };
//	int* p = arr;
//	poin(p);
//	return 0;
//}


//4.����ָ�봫��
//void test(int** pp)//����һ��ָ������ĵ�ַ�����Ƕ���ָ��  ������ָ�����飡��
//{
//	printf("num=%d\n", **pp);
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p = arr;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}


//5.����ָ�룺ָ������ָ��(��ź�����ַ��ָ�룩

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Add(a, b);
//	printf("%p\n", &Add);//&������ �� ��������һ�����������Ǻ����ĵ�ַ
//	printf("%p\n", Add);
//	int(*pA)(int,int) = Add;//����ָ��
//	//֤��
//	int i=(*pA)(2, 3);
//	printf("%d\n", i);
//	
//	return 0;
//}

void Print(char* line)
{
	printf("%s\n", line);
}

int main()
{
	void (*p)(char*) = Print;
    (*p)("nicot");
	return 0;
}

//������Ȥ�Ĵ���

//����1
(*(void(*)())0)();
//����2
void(*signal(int, void(*)(int)))(int);