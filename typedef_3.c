#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//ö��

enum sexuality//ö�ٵ�����
{
	//ö�ٵĿ���ȡֵ--Ҳ��ö�ٳ�����ö�ٳ�ԱĬ��ֵ��0��ʼ�����ε���
	lesbian,
	gay,
	bisexual,
	transgender,
	pansexual,
	asexual,
	queer
};//��ö�ٳ�����ֵ����main�������治�ܹ��ٸ�ֵ

//int main()
//{
//  enum sexuality fu= bisexual;
//	printf("%d,%d,%d", lesbian, gay, bisexual );
//	return 0;
//}

//����ʹ��#define ���峣��

#define lesbian 1

//int main()
//{
//	int fuyu = lesbian;
//	printf("%d", fuyu);
//	return 0;
//}


//����#define�������壬ö�ٵ��ŵ�
//1.��ά���ԺͿɶ��Ը���
//2.��#define����ı�ʶ����ȣ�ö�������ͼ�飬�Ƚ��Ͻ�
//3.��ֹ��������Ⱦ����װ��/������ͻ
//4.���ڵ���
//5.ʹ�÷��㣬һ�οɶ�����������
//enum sexuality fu= bisexual;ֻ����ö�ٳ�����ö�ٱ�����ֵ���Ų���������Ͳ���



//����
//AKA�����壬��ͬ��(���ϵĳ�Ա������ͬһ��ռ䣩

//union nicot
//{
//	char who;
//	int how;
//};
//
//int main()
//{
//	union nicot fu;
//	printf("%d\n", sizeof(fu));
//	printf("%p\n", &fu);
//	printf("%p\n", &(fu.who));
//	printf("%p\n", &(fu.how));
//
//	return 0;
//}
//������Ĵ�С������������Ա�Ĵ�С

//Ӧ�ã��ж��ڴ�Ĵ�С�˴洢

//�ϰ취
//int check_yes()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//�°취
//int check_yes()
//{
//	union daxiao
//	{
//		char a;
//		int b;
//	}u;
//	u.b = 1;
//	return u.a;
//}
//int main()
//{
//	int a = 1;
//	int ret = check_yes();
//
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//�������С�ļ���
//���ϵĴ�С����������Ա�Ĵ�С��
//������Ա��С��������������������ʱ����Ҫ���뵽����������������
//char arr[5]����������1