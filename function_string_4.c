#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

//�ַ����ຯ��
//����         ������Ĳ����������������ͷ�����

//iscntrl      �κο����ַ���
//isspace      �հ��ַ����ո�' ',��ҳ'\f',����'\n',�س�'\r',�Ʊ��'\t'���ߴ�ֱ�Ʊ��'\v'
//isdigit      ʮ��������0-9
//isxdigit     ʮ���������֣�����ʮ�������֣�Сд��ĸa-f����д��ĸA-F

#include<ctype.h>
//int main()
//{
//	char ch = 'w';
//	int ret = islower(ch);
//	printf("%d\n", ret);
//	return 0;
//}

//�ַ�ת����
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