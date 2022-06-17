#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

//字符分类函数
//函数         如果他的参数符合下列条件就返回真

//iscntrl      任何控制字符；
//isspace      空白字符：空格' ',换页'\f',换行'\n',回车'\r',制表符'\t'或者垂直制表符'\v'
//isdigit      十进制数字0-9
//isxdigit     十六进制数字，包括十进制数字，小写字母a-f，大写字母A-F

#include<ctype.h>
//int main()
//{
//	char ch = 'w';
//	int ret = islower(ch);
//	printf("%d\n", ret);
//	return 0;
//}

//字符转换：
//int tolower(int c)
//int toupper(int c)
//int main()
//{
//
//	char ch = tolower('Q');
//		putchar(ch);
//	return 0;
//}

//int main()
//{
//	char arr[] = "Zongshen Water-cooling Engine";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i]=tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}