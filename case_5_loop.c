#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<windows.h>


//模拟用户登录
// int main()
//{
//	char password[]= "fuyu2000";
//	char input[20] = { 0 };
//	int i = 1;
//	int n = 0;
//	int sz = sizeof(password) / sizeof(password[0]);
//	printf("请输入密码:");
//	scanf("%s", input);
//	for(n=0;n<=sz;n++)
//	{
//		if (password[n] == input[n])
//			n++;
//		else
//		{
//			printf("请重新输入密码:");
//			scanf("%s", input);
//			i++;
//			if (i > 3)
//				printf("错误次数过多，暂时无法登录");
//		}
//	}
//	printf("登录成功");
//	return 0;
//}

//示范代码
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 1;i <= 3;i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "fuyu2000") == 0)//strcmp函数等于0时，两字符串相同，>0时前面数较大，同理
//		{
//			printf("登录成功");
//			break;
//		}
//	}
//	if (i > 3)
//		printf("登录失败");
//	return 0;
//}