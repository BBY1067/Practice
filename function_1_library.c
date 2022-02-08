#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//库函数可以再 cplusplus.com
//strcpy:字符串拷贝 （目标，来源）     

//int main()
//{
//	char arr1[] = "crying";
//	char arr2[20] = "##########";
//	strcpy(arr2, arr1);
//	printf("%s", arr2);
//	//strlen：string length 字符串长度
//	return 0;
//}

//memset:memory set 内存设置  (地址，要替换的值，前几个字符）

int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);
	printf("%s", arr);
	return 0;
}
