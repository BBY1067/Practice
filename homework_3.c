#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include< math.h >
//��ӡ1000-2000�������
// ����������1.�ܱ�4�����������ܱ�100����
// 2.�ܹ���400����
//int main()
//{
//	int i = 1000;
//	for (i = 1000;i <= 2000;i++)
//	{
//		if (i % 4 == 0 && i % 100!= 0)
//			printf("����%d  ", i);
//		else if (i % 400 == 0)
//			printf("����%d  ", i);
//	}
//	return 0;
//}

//��ӡһ��100-200�������
//1.�Գ�������ӡ2--i-1����
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 100;i <= 200;i++)
	{
		for (j = 2;j <i;j++)//�򻯽�j<i�ĳ�j<=sqrt(i)����j<=i/2,����ͷ�ļ�#include< math.h >
		{
			if (i % j == 0)
				break;
		}
		if (j == i)//�˴���Ϊj>sqrt(i)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("����%d������", count);
	return 0;
}

//�򻯣�����ʹ��2--i-1ȥ��ӡ��ʹ��2--����i
//ԭ��i=a*b a��b������һ�����ӵ�ֵ�ض�С�ڻ���ڸ���i��
