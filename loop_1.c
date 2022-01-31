#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//
// 使用for循环打印1-10
// // int main()
//{
//	int i = 0;
//	for (i = 1;i < 11;i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//使用while循环打印1-10
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


//使用do-while循环打印1-10
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


//在do-while中加限定条件并使用continue
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


//在while中加限定条件并使用continue
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