  #define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//д���뽫�������ִӴ�С���


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	while (a > b)
//	{
//		if (a > c)
//		{
//			printf("%d ", a);
//			if (b > c)
//				printf("%d %d", b, c);
//			else
//				printf("%d %d", c, b);
//		}
//		else
//			printf("%d %d %d", c, a, b);
//	}
//	if (b > c)
//	{
//		printf("%d ", b);
//		if (a > c)
//			printf("%d %d", a, c);
//		else
//			printf("%d %d", c, a);
//	}
//	else
//		printf("%d %d %d", c, b, a);
//	return 0;
//}

//ð���㷨:�����ֵ���ϸ�
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)//a��ֵС��b�����԰�b��ֵ����a��a�����ֵ
	{
		int blank = a;//�м�������б�Ҫ���ɶ��Ժ��߼���
		a = b;
		b = blank;
	}//���a<b������ʱ�������򾭹����� �������Ϊa>b��������һ��ת�����ı��С���ţ�������if�����Ľ��=����if�����Ľ��и�ֵ����Ľ����
	if (a < c)//��ʱa>b
	{
		int blank = a;
		a = c;
		c = blank;
	}//���a<c�������򾭹����� a>c
	if (b < c)
	{
		int blank = b;
		b = c;
		c = blank;
	}//���b<c�������򾭹�����b>c,����a>b>c
	printf("%d %d %d", a, b, c);
	return 0;
}
