#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//�ݹ��������Ҫ����
//1.����������������������������ʱ���ݹ鲻�ټ���
//2.ÿ�εݹ���ú�Խ��Խ�ӽ������������

//ʷ����򵥵ĵݹ麯��(�������stack overflowջ�����
//int main()
//{
//	printf("I love you");
//	main();
//	return 0;
//}


//1.����һ������ֵ������˳���ӡ����ÿһλ������1234 ���1 2 3 4

//void bili(int i)
//{
//	if (i > 9)
//	{
//		bili(i / 10);
//	}
//	printf("%d ", i % 10);
//}
//int main()
//{
//	unsigned int num = 0;//unsigned���޷����ͱ���
//	scanf("%d", &num);
//	bili(num);
//	
//	return 0;
//}

//2.��д��������������ʱ���������ַ����ĳ���

//��һ�֣�ֱ����strlen����
//int main()
//{
//	char arr[] = "hehe";
//	int length = strlen(arr);
//	printf("%d", length);
//	return 0;
//}

//�ڶ��֣��Լ�дһ��������ʹ��ѭ��������ӡ
//int changdu(char* str)//str��һ����ַ��arr�����һ��Ԫ�صĵ�ַ
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hehe";
//	int length = changdu(arr);
//	printf("%d", length);
//	return 0;
//}

//�ݹ�
//int changdu(char* str)
//{
//	if (*str != '\0')
//		return 1 + changdu(str+1);//����ʹ��str++������ʹ��++str,�ȵݹ���++
//	else
//		return 0;//��������˼
//}
//int main()
//{
//	char arr[] = "hehe";
//	changdu(arr);
//	printf("%d",changdu(arr));
//	return 0;
//}

//3.��n�Ľ׳�
//int multi(int n)
//{
//	if (n != 1)
//		return n * multi(n - 1);
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int res=multi(n);
//	printf("%d", res);
//	return 0;
//}

//4.���n��쳲�������
//1 1 2 3 5 8 13...
//
// ��һ�֣��ݹ鷨
//int fib(int x)
//{
//	if (x <= 2)
//		return 1;
//	else 
//		return fib(x-1)+fib(x-2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num=fib(n);
//	printf("%d", num);
//	return 0;
//}

//�ڶ��֣�ѭ���������Ӻ��ʣ��ݹ����д����ظ����㣩
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int num = fib(n);
	printf("%d", num);
	return 0;
}

