#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
//1.��9�ĸ�����1��100���ֶ��ٸ�����9

//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 10 == 9)//�����λ����9������
//			count++;
//		if (i / 10 == 9)//����ʮλ����9�����֣�i/10���̣�i%10������ࣩ
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//2.������� 

//int main()
//{
//	int i = 0;
//	double frac = 0.0;
//	int mother = 1;
//	int multi = pow(-1, i);//�˴��ɸ�Ϊ��ѭ����ʹ��multi=-multi��
//	for (i = 0;mother <= 100;i++)
//	{
//		multi = pow(-1, i);
//			frac +=(1.0/mother) * multi;
//			mother++;
//	}
//	printf("%lf", frac);
//	return 0;
//}

//3.��10���������ֵ

//int main()
//{
//	int arr[] = { 1,1,1,1,1,1,1,1,1,1 };
//	int i = 0;
//	int a = 0;
//	int tool = 0;
//	for(i=0;i<=9;i++)
//		scanf("%d ", &arr[i]);
//	for (a = 1;a <= 9;a++)
//	{
//		if (arr[0] < arr[a])
//		{
//			tool = arr[a];
//			arr[a] = arr[0];
//			arr[0] = tool;
//		}
//	}
//	printf("max number=%d", arr[0]);
//	return 0;
//}

//4.��ӡ�˷��ھ���

//����

//int main()
//{
//	int uno = 0;
//	int dos = 0;
//	int multi = 0;
//	for (uno = 1;uno <= 9;uno++)
//	{
//		dos = 1;
//		while (dos < uno)
//		{
//				multi = uno * dos;
//			printf(" %d X %d = %-2d ", uno, dos, multi);//%2d �Ҷ��� ��%-2d �����
//			dos++;
//		}
//		if (dos == uno)
//		{
//			multi = uno * dos;
//			printf(" %d X %d = %d \n", uno, dos, multi);
//		}
//       
//	}
//
//	return 0;
//}

//�ո�����

//int main()
//{
//	int uno = 0;
//	int dos = 0;
//	int multi = 0;
//	for (uno = 1;uno <= 9;uno++)
//	{
//		dos = 1;
//		while (dos <=uno)
//		{
//			multi = uno * dos;
//			printf(" %d X %d = %d ", uno, dos, multi);
//			dos++;
//		}
//		printf("\n");
//
//	}
//
//	return 0;
//}

//�Ź���˷��ھ���

//int main()
//{
//	int uno = 0;
//	int dos = 0;
//	int multi = 0;
//	for (uno = 1;uno <= 9;uno++)
//	{
//		dos = 1;
//		while (dos <=9)
//		{
//			multi = uno * dos;
//			printf(" %d X %d = %d ", uno, dos, multi);
//			dos++;
//		}
//	}
//	return 0;
//}

//��΢����һ��

//int main()
//{
//	int uno = 0;
//	int dos = 0;
//	int multi = 0;
//	for (uno = 1;uno <= 9;uno++)
//	{
//		dos = 1;
//		while (dos < 9)
//		{
//			multi = uno * dos;
//			printf(" %d X %d = %d ", uno, dos, multi);
//			dos++;
//		}
//		if (dos == 9)
//		{
//			multi = uno * dos;
//			printf(" %d X %d = %d \n", uno, dos, multi);
//		}
//
//	}
//	return 0;
//}

//���ֲ���:��50���ڵ����������У���������ĳ�������Ƿ�Ϊ����


int main()
{
	int arr[15] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int i = 0;
	int j = 0;
	int count = 0;
	int q = 0;
	for (i = 1;i <= 50;i++)
	{
		for (j = 2;j <i;j++)//�򻯽�j<i�ĳ�j<=sqrt(i)����j<=i/2,����ͷ�ļ�#include< math.h >
		{
			if (i % j == 0)
				break;
		}
		if (j == i)//�˴���Ϊj>sqrt(i)
		{
			count++;
			arr[q] = i;
			q++;
		}
	}

	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int tar = 0;
	scanf("%d", &tar);
	while (left <=right)
	{
		int mid = (left + right) / 2;
		if (tar < arr[mid])
			right = mid - 1;
		else if (tar > arr[mid])
			left = mid + 1;
		else
		{
			printf("�±�Ϊ%d", mid);
			break;
		}
	}
	if (left > right)
		printf("not found");

	return 0;
}

