#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//����1
//(*(void(*)())0)();
// 
//��0ǿ������ת��void(*)()����ָ�����ͣ�->0����һ�������ĵ�ַ
// ���һ��������������0��ַ���ĸú���
// 
// ǿ������ת����void(*)()��0
// ������*(void(*)())0


//����2
//void(*signal(int, void(*)(int)))(int);
//void(*   signal(int, void(*)(int))    )(int)
//������void(*)(int)   signal(int, void(*)(int))
//���Ƿ���ָ�����ͣ�����������Ҫ��*��һ��

//��
//void(*signal(int, void(*)(int)))(int);
//typedef void(*pp)(int);//��void(* )(int)ȡ��
//
//pp signal(int, pp);

//����������signal��һ������������signal������������������һ����int���ڶ����Ǻ���ָ��
//�ú���ָ��ָ��ĺ����Ĳ�����int����������Ϊvoid
//signal�����ķ�������ҲΪһ������ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int����������Ϊvoid


//���ú���ָ�룬������*����û����
//int��*pa��(int,int)=Add;
// 
//printf("%d\n",(*pa)(2,3));=printf("%d\n",pa(2,3));=printf("%d\n",Add(2,3))


//СBoss������ָ������!!!!!!!

//int Add(int x, int y)
//{
//	return x + y;
//}
//int	Sub(int x, int y)
//{
//	return x - y;
//}
//int	Mul(int x, int y)
//{
//	return x * y;
//}
//int	Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//ָ������
//
//	//��Ҫһ�����飬���4�������ĵ�ַ���������
//	int (*pa)(int, int) = Add;
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

//��ϰ��
int (*parr1[10])();
int* parr2[10]();
int(*)()parr3[10];