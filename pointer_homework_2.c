#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int*ptr = (int*)(&a + 1);//(&a+1)�������ַ��Ӧ�÷ŵ�����ָ��ȥ������ǿ������ת��
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char* pcname;
//	short sDate;
//	char chap[2];
//	short SBA[4];
//}*p;
//����p��ֵΪ0x100000�����±��ʽ��ֵ�ֱ�Ϊ����
//��֪�ṹ������Ĵ�С��20���ֽ�

//int main()
//{
//	p =(struct Test*) 0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);//unsigned long��pת��Ϊ������16����->10���ƣ�����+1��ת��Ϊ16��������ʵʵ���ڵ�+1��%p�����16����
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

int main()
{
	//1.
	//int a[4] = { 1,2,3,4 };
	//int* ptr1 = (int*)(&a + 1);
	//int* ptr2 = (int*)((int)a + 1);//(int)a+1 ���ƫ��һ���ֽ�->1��ͷ�ĵ�ַ���һ���ֽ�
	//printf("%x,%x", ptr1[-1], *ptr2);//*(ptr1+(-1))
	//%x��ʾ����16���ƽ��д�ӡ���


	//2.
	//int a[3][2] = { (0,1),(2,3),(4,5) };//!!���ű��ʽ�����һ�����
	//int* p;
	//p = a[0];//��һ������������ʱ��������ʵ����Ϊ{(1,3)(5,0)(0,0)};
	//printf("%d", p[0]);//p[0]=*(p+0)

	//3.
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}
