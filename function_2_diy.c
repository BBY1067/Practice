#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//дһ�������������������Сֵ
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int i=Max(a, b);
//	printf("%d", i);
//	return 0;
//}


//дһ���������Խ����������ͱ���
//ʵ�Σ�������ȷ����ֵ�������ǳ��� ���� ���ʽ ��ֵ������
//�βΣ����ú��ʵ�����������ڴ�ռ䣩��������ɺ��Զ��ݻ١����仰˵���β���ʵ�ε���ʱ����
//�βκ�ʵ��ռ�ò�ͬ���ڴ��
void change(int* x, int* y)//ע��void��ʾû�з���ֵ�����������ź���Ϊ�βΣ�������ʵ�Σ�����Ҫʹ��ָ��
{
	int i = 0;
	i = *x;
	*x = *y;
	*y = i;
}

int main()
{
	int a = 10;
	int b = 555;
	printf("a=%d,b=%d\n", a, b);
	change(&a, &b);
	printf("a=%d,b=%d",a,b);
	return 0;
}

