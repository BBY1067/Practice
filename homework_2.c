#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include< math.h >
//дһ�������ӡ1-100������3�ı���
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}


//���������������������������Լ��
//��һ������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int dos = 0;
//	int tres = 0;
//	int cuatro = 0;
//	scanf("%d %d", &a, &b);
//	int aa = a%2;
//	int bb = b%2;
//	int aaa = a%3;
//	int bbb = b%3;
//	int fa = a%5;
//	int fb = b%5;
//	int d = 0;
//	int t = 0;
//	int c = 0;
//	if (a % b == 0)
//		printf("���Լ��Ϊ%d", b);
//	else if (b % a == 0)
//		printf("���Լ��Ϊ%d", a);
//	else
//	{
//		for (dos = 0;aa + bb == 0;dos++)
//		{
//			a = a / 2;
//			b = b / 2;
//			aa = a % 2;
//			bb = b % 2;
//		}
//		for (tres = 0;aaa + bbb == 0;tres++)
//		{
//			a = a / 3;
//			b = b / 3;
//			aaa = a % 3;
//			bbb = b % 3;
//		}
//
//		for (cuatro = 0;fa + fb == 0;cuatro++)
//		{
//			a = a / 5;
//			b = b / 5;
//			fa = a % 5;
//			fb = b % 5;
//		}
//		printf(" %d %d %d", dos, tres, cuatro);
//		d = pow(2, dos);
//		t = pow(3, tres);
//		c = pow(5, cuatro);
//		int max = d * t * c;
//		if (dos + tres + cuatro == 0)
//			printf("���Լ��Ϊ1");
//		else
//			printf("���Լ��Ϊ%d", max);
//	}
//	return 0;
//}

//�ڶ���������ŷ�����շת�����
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		int blank = a;
		a = b;
		b = blank;
	}
	while (a % b)//��a%b==0ʱ������Ϊ�٣�����ѭ��
	{
		int r = a % b;//��һ������ʡ�ԣ���while����������Ϊr=a%b��
		a=b;
		b = r;
	}
	printf("���Լ��Ϊ%d", b);
	return 0;
}
