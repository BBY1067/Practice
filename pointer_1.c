#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//ָ�����͵�����1.�����ò���ʱ�ܹ����ʿռ�Ĵ�С  2.ָ��Ĳ���
//int main()
//{
//	int a = 0x11223344;//16��������ÿһ��16������������ת��Ϊһ����λ��2��������11 8��bit��1���ֽڣ�22ͬ����32 bit��4���ֽ�
//	int* pa1 = &a;
//	char* pa2 = &a;
//	double* pa3 = &a;
//	printf("��ӡ��ͬ����\n");
//	printf("%p\n",pa1);
//	printf("%p\n", pa2);
//	printf("%p\n", pa3);
//	//�����ò������ʿռ��С��
//	*pa1 = 0;
//	*pa2 = 0;
//	*pa3 = 0;
//	printf("\nͨ�������ò����ı�ָ�����\n");
//	printf("%p\n", pa1);
//	printf("%p\n", pa2);
//	printf("%p\n", pa3);
//	printf("\n����ָ��Ĳ���\n");
//	printf("%p\n", pa1+1);
//	printf("%p\n", pa2+1);
//	printf("%p\n", pa3+1);
//	return 0;
//}

//ָ�벽����Ӧ��
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//ָ������㣺ָ��-ָ������ַ����ĳ��� ���ݹ鷨��function_3_recursion�У�
int length(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
	char arr[] = "bit";
	int len = length(arr);
	printf("����Ϊ%d", len);
	return 0;
}