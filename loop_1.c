#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//
// ʹ��forѭ����ӡ1-10
// // int main()
//{
//	int i = 0;
//	for (i = 1;i < 11;i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//ʹ��whileѭ����ӡ1-10
// int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		printf("%d ", i);
//	}
//	return 0;
//}


//ʹ��do-whileѭ����ӡ1-10
// int main()
//{
//	int i = 0;
//	do
//	{
//		i++;
//		printf("%d ",i);
//	}
//		while (i < 10);
//	return 0;
//}


//��do-while�м��޶�������ʹ��continue
int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			continue;
		printf("%d ", i);
      i++;
	} while (i < 10);
	return 0;
}


//��while�м��޶�������ʹ��continue
// int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}