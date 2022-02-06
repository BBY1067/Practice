#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
//1.数9的个数：1到100出现多少个数字9

//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 10 == 9)//计算个位上有9的数字
//			count++;
//		if (i / 10 == 9)//计算十位上有9的数字（i/10是商，i%10求的是余）
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//2.分数求和 

//int main()
//{
//	int i = 0;
//	double frac = 0.0;
//	int mother = 1;
//	int multi = pow(-1, i);//此处可改为在循环中使用multi=-multi；
//	for (i = 0;mother <= 100;i++)
//	{
//		multi = pow(-1, i);
//			frac +=(1.0/mother) * multi;
//			mother++;
//	}
//	printf("%lf", frac);
//	return 0;
//}

//3.求10个整数最大值

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

//4.打印乘法口诀表

//梯形

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
//			printf(" %d X %d = %-2d ", uno, dos, multi);//%2d 右对齐 ；%-2d 左对齐
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

//空格代码简化

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

//九宫格乘法口诀表

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

//稍微美化一下

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

//两分查找:从50以内的素数序列中，查找数字某个数字是否为素数


int main()
{
	int arr[15] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int i = 0;
	int j = 0;
	int count = 0;
	int q = 0;
	for (i = 1;i <= 50;i++)
	{
		for (j = 2;j <i;j++)//简化将j<i改成j<=sqrt(i)或者j<=i/2,调用头文件#include< math.h >
		{
			if (i % j == 0)
				break;
		}
		if (j == i)//此处变为j>sqrt(i)
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
			printf("下标为%d", mid);
			break;
		}
	}
	if (left > right)
		printf("not found");

	return 0;
}

