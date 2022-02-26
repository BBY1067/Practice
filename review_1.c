#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
//1.交换两个int变量的值，不能使用第三个int变量

//int main()
//{
//	int a = 5;
//	int b = 3;
//	INT_MAX;// int 4字节 32bit位 最大值2147483647
//	//此种做法会造成溢出
//	//a = a + b;
//	//b = a - b;//b还是原来的b ，b=a
//	//a = a - b;//a得到原来的b
//
////按位异或（逻辑算法：不会造成溢出）
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	
//	printf("a=%d  b=%d\n",a,b);
//	return 0;
//}

//2.找出只出现一次的数 ：给出一个非空整型数组，只有一个元素只出现了一次，其他元素出现了两次
//
//暴力解法，循环次数过多
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0;
//	int j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	for (i = 0;i < sz;i++)
//	{
//		int count = 0;
//		for (j = 0;j < sz;j++)
//		{
//			if (arr[i] == arr[j])
//				count++;
//		}
//		if (count == 1)
//		{
//			printf("唯一的元素=%d", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}
//
////异或
////a^a=0  0^a=a  a^b^c=a^c^b (满足乘法交换律）
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int ret = 0;
//	for (i = 0;i < sz;i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("唯一的元素=%d", ret);
//	return 0;
//}
//
////3.关机游戏
int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 120");
	again:
	printf("计算机将在2分钟后关闭，如果输入'我是猪’则解除\n");
	scanf("%s", &arr);
	if (strcmp(arr, "我是猪") == 0)
		system("shutdown -a");
	else
		goto again;
	return 0;
}