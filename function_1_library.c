#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//�⺯�������� cplusplus.com
//strcpy:�ַ������� ��Ŀ�꣬��Դ��     

//int main()
//{
//	char arr1[] = "crying";
//	char arr2[20] = "##########";
//	strcpy(arr2, arr1);
//	printf("%s", arr2);
//	//strlen��string length �ַ�������
//	return 0;
//}

//memset:memory set �ڴ�����  (��ַ��Ҫ�滻��ֵ��ǰ�����ַ���

int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);
	printf("%s", arr);
	return 0;
}
