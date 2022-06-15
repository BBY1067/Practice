#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//strtok & strerror 
 
 

//strtok: 拆分提取函数

//char * strtok(char * str, const char *sep);
// sep参数是个字符串，定义了用作分隔符的字符集合
//strtok函数会去字符串中找分隔符，并把分隔符替换为\0，会修改字符串
//一般操作临时拷贝的字符串

//int main()
//{
//	char arr[] = "fu023@nicotmoto.com";
//	char* p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);//arr-->buf（临时拷贝或存档）
//
//
//	char arr2[] = "192.23.253.63";//IP地址的表达方式，点分十进制
//	char* x = ".";
//	char haha[100] = { 0 };
//	strcpy(haha, arr2);
	//切割buf中的字符串

//	char* ret = strtok(arr, p);//ret接受strtok切割后返回的指针
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);//第二次切割
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);//第三次切割
//	printf("%s\n", ret);
//	return 0;
//}

//	char* ret = NULL;
//	for (ret = strtok(arr, p);ret != NULL;ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	char* ret2 = NULL;
//	for (ret2 = strtok(arr2, x);ret2 != NULL;ret2 = strtok(NULL, x))
//	{
//		printf("%s\n", ret2);
//	}
//	return 0;
//}



//strerror
//返回错误码，所对应的错误信息
//char * strerror(int errnum)

#include<errno.h>//必须包含的头文件
//引用头文件即可使用strerror(errno)
//int main()
//{
	//错误码   错误信息
	//0 -       No error
	//1 -       Operation not permitted
	//2 -       No such file or directory
	//...
	//errno 是一个全局的错误码的变量
	//当c语言的库函数在执行的过程中，发生了错误，就会把对应的错误码，赋值到errno
	
	//c语言打开文件
//	FILE* pf = fopen("test.txt", "r");//r->read 读文件（同路径里面寻找）
//	if (pf == NULL)//证明函数调用失败，但是需要知道失败的原因
//	{ 
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	char* str = strerror(2);
//	printf("%s\n", str);
//	return 0;
//}
