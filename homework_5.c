#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<math.h>
//1.��ϰð������  array_1�и���ϸ�Ľ��
//�÷�����ȱ�㣬j���������˸���εĸ�ֵ

//int main()
//{
//	int arr[12] = { 1, 8, 9, 5, 6, 2, 4, 7,11,18,9,55 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < sz;i++)
//	{
//		for (j = i+1;j <sz;j++)//��i�����͵�i�������������Ƚϴ�С
//		{
//			if (arr[i] < arr[j])//��i������ֵΪ��i������������ֵ������һ��
//			{
//				int temp = 0;
//				temp = arr[i];
//				arr[i] = arr[j];//�����ֵ����i
//				arr[j] = temp;
//			}
//		}
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//2.�������������һ���������飬��ɶ�����Ĳ���
// ʵ�ֺ���init()����ɶ�����ĳ�ʼ����
// ʵ��printf()����ɶ�����ÿһ��Ԫ�صĴ�ӡ
// ʵ��reverse(),��ɶ�����Ԫ�ص�����
//Ҫ���Լ��������Ϻ����Ĳ����ͷ���ֵ

#include "homework_5.h"

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);
//	reverse(arr,sz);
//	print(arr, sz);
//	address(arr, sz);
//	return 0;
//}

//3.������A�к�����B�е�Ԫ�ؽ��н����������Сһ��
//int main()
//{
//	int arr1[10] = { 11,22,33,44,55,66,77,88,99,100 };
//	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	print(arr1, sz);
//	print(arr2, sz);
//	return 0;
//}

//%x��ӡ16����λ����
//int i;//ȫ�ֱ�����δ��ʼ����Ĭ��Ϊ0������Ϊ�ֲ����������
//int main()
//{
//	i--;
//	if (i > sizeof(i))//��һ���������޷��������Ƚ�ʱ��������Ҳ�����޷�������-1�Ĳ���Ϊ11111....11111����Ϊ�����������һ����ӡԭ�뼴Ϊ11111...11111
//	{
//		printf(">\n");
//	}
//	else
//		printf("<\n");
//	return 0;
//}

//4.ͳ�ƶ������У����룩1�ĸ��� ��operator_1������������
#include<stdlib.h>
//�����㷨

//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
	//��aΪ����ʱ
//while (a)
//{
//if (a % 2 == 1)
//	{
//		count++;
//	}
//		a = a / 2;
//}
	//��aΪ����ʱ�������������ִ�����Ϊ����ԭ��������ͬ
	//-1�������ڴ���
	//ԭ��1000000000001
	//����1111111111110
	//����1111111111111��ʹ�ð�λ��
	//int i = 0;
	//for (i = 0;i < 32;i++)
	//{
	//	if (1 == ((a >> i) & 1))
	//		count++;
	//}
//	system("pause");
//	printf("��������1�ĸ���Ϊ%d", count);
//	return 0;
//}

//����㷨

//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	while (a)
//	{
//		a = (a & (a - 1));
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//5.�������λ�в�ͬλ�ĸ���������int����m��n�Ķ������У��ж��ٸ�λbit��ͬ

//int main()
//{
//	int m = 0;//10:0110
//	int n = 0;//13:1101
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	int count = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if ((m >> i) ^ (n >> i) == 1)//Ҳ����ʹ����������㷨��m^n�󣬼���ֵ�Ķ�������1��������
//			count++;
//	}
//	printf("��%d��bit��ͬ\n",count);
//	return 0;
//}

//5.����2�����е�����λ��ż��λ����ȡһ�������Ķ������е���������λ��ż��λ���ֱ��ӡ������������

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	//��ӡ����λ�������Ҵ�ӡ �ƶ�30��0λ
//	printf("����λ\n");
//	for (i = 30;i >=0;i-=2)
//	{
//		printf("%d", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ\n");
//	for (i = 31;i >= 1;i -= 2)
//	{
//		printf("%d", (a >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}

//6.��������������������������������ʱ����

//

//7.��ָ���ӡ�������ݣ���ʹ���±�

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//8.ʵ��һ���������ж�һ�����ǲ�����������������ĺ�����ӡ100��200������
//���������Լ��ͱ������ܱ�����������

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	prime(a);
//	int i = 0;
//	int j = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		for (j = 2;j <= sqrt(i);j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j> sqrt(i))
//			printf("%d  ", i);
//	}
//	return 0;
//}

//9.��ӡ�˷��ھ�������һ������������12 ��õ�12*12�ĳ˷��ھ���

//void multitable(int a)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1;i <= a;i++)
//	{
//		for (j = 1;j <= i;j++)
//		{
//			int r = i * j;
//			printf("%d*%d=%-2d   ", i, j, r);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	multitable(a);
//	return 0;
//}

//10.�ݹ鷽ʽ��ӡ������ÿһλ
//void intprint(int num)
//{
//	if (num > 9)
//	{
//		intprint(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	intprint(num);
//	return 0;
//}

//11.�ݹ�ͷǵݹ�ֱ�ʵ��n�Ľ׳�

//�ǵݹ�
//int main()
//{
//	int num = 0;
//	int rcp = 1;
//	scanf("%d", &num);
//	while (num >1)
//	{
//		rcp= rcp * num;
//		num--;
//	}
//	printf("%d", rcp);
//	return 0;
//}

//�ݹ�
int factorial(int num)
{
	int a = 0;
	if (num > 1)
	{
		num=num*factorial(num - 1);
	}
	return num;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int rcp=factorial(num);
	printf("%d", rcp);
}


