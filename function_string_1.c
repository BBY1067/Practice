#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//求字符串的长度
//strlen

//长度不受限制的字符串函数
// strcpy
// strcat
// strcmp

//长度受限制的字符串函数
// strncpy
// strncat
// strncmp

//字符串查找
// strstr
// strtok

//错误信息报告
//strerror

//字符操作

//内存操作函数
//memcpy
//memmove
//memset
//memcmp


//1.strlen计数器，还有递归写法
#include<assert.h>
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')//while(*str)
	{
		count++;
		str++;
	}
	return count;
}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	if (strlen("abc") - strlen("abcdef") > 0)//strlen返回的是无符号数，无符号数相减肯定不能为负数
////改为my_strlen就不存在这个问题，应为使用的iNT
//	{
//		printf("hehe\n");
//	}
//	else
//		print("fuck\n");
//	return 0;
//}

//2.strcpy
//char* strcpy(char*destination, const char* source)
char* my_strcpy(char* arr1,const char* arr2)
{
	assert(arr1 != NULL);
	assert(arr2 != NULL);
/*	while (*arr2!='\0')
	{
		*arr1 = *arr2;
		arr1++;
		arr2++;
	}
	*arr1 = *arr2;*///拷贝\0

//上述表达式可以精简
	char* ret = arr1;
	//拷贝arr2指向的字符串到arr1指向的空间，包括'\0'
	while (*arr1++ = *arr2++)//当arr2解引用第一个地址 为n，赋值到arr1第一个解引用位置a上面，结果为n，进入循环
	{
		;
	}
	return ret;//返回目的空间的起始地址
}
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "nicot";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//注意事项：1.源字符串需要包括\0，否则自定义函数中无法进入循环
//2.目标空间必须足够大，以确保能放源字符串
// 3.目标空间必须可变  例如如同char *arr1="abcdefg" 常量字符串不可更改，不能作为目标空间


//3.strcat追加
char* my_strcat(char* arr1,const char* arr2)//源字符串不会发生变化
{
	assert(arr1 && arr2 != NULL);
	assert(arr1);//两种形式均可
	assert(arr2);
	char* ret = arr1;
	//第一步：找到目的字符串的\0
	while (*arr1)
	{
		arr1++;
	}
	//第二部：追加
	while (*arr1++=*arr2++)
	{
		;
	}
	return ret;
}
//int main()
//{
//	char arr1[30] = "hello\0xxxxxx";
//	char arr2[] = "nicot";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//注意事项：1.目的字符串和源字符串需要包括\0，以便直到从哪追加，追加到哪结束
//2.目标空间必须足够大，以确保能放源字符串
// 3.目标空间必须可变



//寻找库函数：vs所在文件夹》vc》crt》src》

//4.strcmp
//标准规定：第一个字符串大于第二个字符串，返回一个>0的数字
// 等于则返回0
// 小于则返回<0的数字
int my_strcmp(const char* arr1, const char* arr2)
{
	assert(arr1 && arr2 != 0);
	//比较
	while (*arr1 == *arr2)
	{
		if (*arr1 == '\0')
		{
			return 0;
		}
		arr1++;
		arr2++;
	}
	if (*arr1 > *arr2)
	{
		return *arr1 - *arr2;
	}
	else
		return *arr1 - *arr2;

}
//int main()
//{
//	char* p1 = "ebeast";//常量字符串的意思
//	char* p2 = "efox";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);//ret为-1，说明比较的不是字符串长度，而是逐个比较字符串ascii值的大小
//	return 0;
//}

//对于strcpy,strcmp,strcat,的带n版本
//strncpy,strncmp,strncat有3个参数，第三个为字节大小
//strncpy不自动补\0，源字符串不够长则补0
//strncat自动补\0，源字符串不够长也不管

