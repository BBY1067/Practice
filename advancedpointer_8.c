#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

int main()
{
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//��������Ĵ�С
	printf("%d\n", sizeof(a + 0));//��Ԫ�ص�ַ��С
	printf("%d\n", sizeof(*a));//��Ԫ�ش�С
	printf("%d\n", sizeof(a + 1));//�ڶ���Ԫ�ص�ַ��С
	printf("%d\n", sizeof(a[1]));//�ڶ���Ԫ�صĴ�С
	printf("%d\n", sizeof(&a));//�����ַ�Ĵ�С
	printf("%d\n", sizeof(*&a));//��������Ĵ�С

	printf("%d\n", sizeof(&a+1));//��ַ�������������飬����&a+1���ǵ�ַ
	printf("%d\n", sizeof(&a[0]+ 1));//�ڶ���Ԫ�ص�ַ�Ĵ�С
	return 0;
}
