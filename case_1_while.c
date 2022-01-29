#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

//解决原程序直接跳过确认步骤
// int main()
//{
//	int a = 0;
//	char password[20] = { 0 };
//	printf("输入密码：");
//	scanf("%s", password);//数组为首地址，此处不用使用“&”
//	printf("是否确认（Y/N）：");
//	a = getchar();
//	if (a == 'Y')
//		printf("成功");
//	else
//		printf("取消");
//	return 0;
//}


int main()
{
	int a = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("please enter your password:");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')//此处可以使用getchar();
	{
		;//由于getchar只接收一个字符,需要重复使用，while可以解决
	}
	printf("would you like to confim?(y/n):");
	a = getchar();//getchar接受字符并将字符转化为ASCII码，所以a接受的是数字，应该为整型类型 int a
	if (a == 'y')
		printf("success");
	else
		printf("cancel");
		return 0;
}