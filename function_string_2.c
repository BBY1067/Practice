#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//文档中
//NULL--空指针；NUL/Null--'\0'


//字符串查找
//strstr
#include<assert.h>
char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* s1 = p1;
	char* s2 = p2;
	char* cur = p1;//记录有可能匹配成功的位置(起始位置)
	if (*p1 == '\0')
	{
		return p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = p2;
		while ((*cur != '\0') && (*p2 != '\0') && (*cur == *p2))
		{
			p1++;
			p2++;
		}
		if (*s2 == '\0')
		{
			return cur;//找到子串
		}
		cur++;
	}
	return NULL;//找不到空指针
}
//int main()
//{
//	char* p1 = "abcdefg";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("not found");
//	}
//	else
//	{
//		printf("%s\n", ret);//打印的是p1字符串中p2出现的起始位置到最后
//	}
//	return 0;
//}