#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//���ַ����ĳ���
//strlen

//���Ȳ������Ƶ��ַ�������
// strcpy
// strcat
// strcmp

//���������Ƶ��ַ�������
// strncpy
// strncat
// strncmp

//�ַ�������
// strstr
// strtok

//������Ϣ����
//strerror

//�ַ�����

//�ڴ��������
//memcpy
//memmove
//memset
//memcmp


//1.strlen�����������еݹ�д��
#include<assert.h>
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')//while(*str)
	{
		count++;
		str++;
	}
	return count;
}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	if (strlen("abc") - strlen("abcdef") > 0)//strlen���ص����޷��������޷���������϶�����Ϊ����
////��Ϊmy_strlen�Ͳ�����������⣬ӦΪʹ�õ�iNT
//	{
//		printf("hehe\n");
//	}
//	else
//		print("fuck\n");
//	return 0;
//}

//2.strcpy
//char* strcpy(char*destination, const char* source)
char* my_strcpy(char* arr1,const char* arr2)
{
	assert(arr1 != NULL);
	assert(arr2 != NULL);
/*	while (*arr2!='\0')
	{
		*arr1 = *arr2;
		arr1++;
		arr2++;
	}
	*arr1 = *arr2;*///����\0

//�������ʽ���Ծ���
	char* ret = arr1;
	//����arr2ָ����ַ�����arr1ָ��Ŀռ䣬����'\0'
	while (*arr1++ = *arr2++)//��arr2�����õ�һ����ַ Ϊn����ֵ��arr1��һ��������λ��a���棬���Ϊn������ѭ��
	{
		;
	}
	return ret;//����Ŀ�Ŀռ����ʼ��ַ
}
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "nicot";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//ע�����1.Դ�ַ�����Ҫ����\0�������Զ��庯�����޷�����ѭ��
//2.Ŀ��ռ�����㹻����ȷ���ܷ�Դ�ַ���
// 3.Ŀ��ռ����ɱ�  ������ͬchar *arr1="abcdefg" �����ַ������ɸ��ģ�������ΪĿ��ռ�


//3.strcat׷��
char* my_strcat(char* arr1,const char* arr2)//Դ�ַ������ᷢ���仯
{
	assert(arr1 && arr2 != NULL);
	assert(arr1);//������ʽ����
	assert(arr2);
	char* ret = arr1;
	//��һ�����ҵ�Ŀ���ַ�����\0
	while (*arr1)
	{
		arr1++;
	}
	//�ڶ�����׷��
	while (*arr1++=*arr2++)
	{
		;
	}
	return ret;
}
//int main()
//{
//	char arr1[30] = "hello\0xxxxxx";
//	char arr2[] = "nicot";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//ע�����1.Ŀ���ַ�����Դ�ַ�����Ҫ����\0���Ա�ֱ������׷�ӣ�׷�ӵ��Ľ���
//2.Ŀ��ռ�����㹻����ȷ���ܷ�Դ�ַ���
// 3.Ŀ��ռ����ɱ�



//Ѱ�ҿ⺯����vs�����ļ��С�vc��crt��src��

//4.strcmp
//��׼�涨����һ���ַ������ڵڶ����ַ���������һ��>0������
// �����򷵻�0
// С���򷵻�<0������
int my_strcmp(const char* arr1, const char* arr2)
{
	assert(arr1 && arr2 != 0);
	//�Ƚ�
	while (*arr1 == *arr2)
	{
		if (*arr1 == '\0')
		{
			return 0;
		}
		arr1++;
		arr2++;
	}
	if (*arr1 > *arr2)
	{
		return *arr1 - *arr2;
	}
	else
		return *arr1 - *arr2;

}
//int main()
//{
//	char* p1 = "ebeast";//�����ַ�������˼
//	char* p2 = "efox";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);//retΪ-1��˵���ȽϵĲ����ַ������ȣ���������Ƚ��ַ���asciiֵ�Ĵ�С
//	return 0;
//}

//����strcpy,strcmp,strcat,�Ĵ�n�汾
//strncpy,strncmp,strncat��3��������������Ϊ�ֽڴ�С
//strncpy���Զ���\0��Դ�ַ�����������0
//strncat�Զ���\0��Դ�ַ���������Ҳ����

