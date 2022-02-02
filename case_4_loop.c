#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<windows.h>//使用sleep函数，休息一下
#include<stdlib.h>//使用system系统命令

//打印字符使得字符向中间靠拢
// int main()
//{
//	char arr1[] = "welcom to our farm";
//	char arr2[] = "##################";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);//在字符串中 整个字符串长度（如果是数字就是数组大小）会+1（因为有\0的存在）
//    int left = 0;
//	int right = strlen(arr1) - 1;//strlen函数计算字符串的有效长度（不包括"\0")
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];//arr1和arr2位置不可调换，赋值意义不同
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);//单位ms,注意要大写S
//		system("cls");//执行系统命令--清空屏幕
//	}
//	printf("%s\n", arr2);
//		return 0;
//}