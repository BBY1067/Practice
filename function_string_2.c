#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//�ĵ���
//NULL--��ָ�룻NUL/Null--'\0'


//�ַ�������
//strstr
#include<assert.h>
char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* s1 = p1;
	char* s2 = p2;
	char* cur = p1;//��¼�п���ƥ��ɹ���λ��(��ʼλ��)
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
			return cur;//�ҵ��Ӵ�
		}
		cur++;
	}
	return NULL;//�Ҳ�����ָ��
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
//		printf("%s\n", ret);//��ӡ����p1�ַ�����p2���ֵ���ʼλ�õ����
//	}
//	return 0;
//}