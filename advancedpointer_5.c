#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//char* my_strcpy(char* dest, const char* src);
//дһ������ָ��pf���ܹ�ָ��my_strcpy;
//дһ������ָ�����飬�ܹ����4��my_strcpy�ĵ�ַ��

//char* (*pf)(char*, const char*);
//char* (*pf2[4])(char*, const char*);

//����ָ���������;��ת�Ʊ�

//ʵ�ּ�������

void menu()
{
	printf("********************************\n");
	printf("**** 1.Add ******** 2.Sub ******\n");
	printf("**** 3.Mul ******** 4.Div ******\n");
	printf("************ 0.exit *************\n");
	printf("********************************\n");
}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int	Mul(int x, int y)
{
	return x * y;
}
int	Div(int x, int y)
{
	return x / y;
}

//int main()
//{
//	int input = 0;
//	int a = 0;
//	int b = 0;
//
//	do
//	{
//		menu();
//		printf("Please type:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("Please type numbers:>");
//			scanf("%d %d", &a, &b);
//			printf("%d\n", Add(a, b));
//			break;
//		case 2:
//			printf("Please type numbers:>");
//			scanf("%d %d", &a, &b);
//			printf("%d\n", Sub(a, b));
//			break;
//		case 3:
//			printf("Please type numbers:>");
//			scanf("%d %d", &a, &b);
//			printf("%d\n", Mul(a, b));
//			break;
//		case 4:
//			printf("Please type numbers:>");
//			scanf("%d %d", &a, &b);
//			printf("%d\n", Div(a, b));
//			break;
//		case 0:
//			printf("exiting...");
//			break;
//		default:
//			printf("Please type again");
//			break;
//		}
//
//	} while (input);


//�����򻯣�--ת�Ʊ�
//int main()
//{
//	int input = 0;
//	int a = 0;
//	int b = 0;
//	int(*parr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("Please choose:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("Please give two numbers:>");
//			scanf("%d %d", &a, &b);
//			printf("%d\n", parr[input](a, b));
//		}
//		else if (input == 0)
//		{
//			printf("exiting...");
//		}
//		else
//		{
//			printf("Please choose again\n");
//		}
//	} while (input);
//	return 0;
//}


//�ص�������ͨ������ָ����õĺ��������Ѻ�����ָ�루��ַ����Ϊ����������һ�������������ָ�뱻��������ʱ�����Ǿ�˵���ǻص�����
//��������ʹ������ļӼ��˳�4������

//void huidiao(int (*pf)(int, int))
//{
//	int a = 0;
//	int b = 0;
//	printf("Please type numbers:>");
//	scanf("%d %d", &a, &b);
//	printf("%d\n", (*pf)(a, b));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("Please type:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			huidiao(Add);
//			break;
//		case 2:
//			huidiao(Sub);
//			break;
//		case 3:
//			huidiao(Mul);
//			break;
//		case 4:
//			huidiao(Div);
//			break;
//		case 0:
//			printf("exiting...");
//			break;
//		default:
//			printf("Please type again");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

//ָ����ָ�������ָ��
//ָ��  ����ָ������  ��ָ�룺һ��ָ�� ָ����һ������  ��������Ԫ���Ǻ���ָ��

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int (*p)[5] = &arr;//ָ�������ָ��
//
//	int (*parr[4])(int, int) = { Add };
//	int(*(*pparr)[4])(int, int) = &parr;
//	//pparr��һ��ָ�룬��ָ��ָ����һ������4��Ԫ�ص����飬Ԫ�ص�����Ϊ����ָ�룻
//}

//�ص���������
//void Print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void (*p)(char*))
//{
//	printf("test");
//	p("nicot");//��Print����
//}
//int main()
//{
//	test(Print);
//	return 0;
//}



//�½ڿ�Ԥ�棺
//ð������֮ǰ��ð��������ֻ��������������
