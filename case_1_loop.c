#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//����n�Ľ׳�
int main()
{
	int a = 0;
	int b = 0;
	int c = 1;
	scanf("%d",&b);
	while (b>0)
	{
		a = b * c;
		c = a;
		b--;
	}
	printf("�׳˽��Ϊ%d",c);
		return 0;

}