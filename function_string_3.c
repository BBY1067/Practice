#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//strtok & strerror 
 
 

//strtok: �����ȡ����

//char * strtok(char * str, const char *sep);
// sep�����Ǹ��ַ����������������ָ������ַ�����
//strtok������ȥ�ַ������ҷָ��������ѷָ����滻Ϊ\0�����޸��ַ���
//һ�������ʱ�������ַ���

//int main()
//{
//	char arr[] = "fu023@nicotmoto.com";
//	char* p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);//arr-->buf����ʱ������浵��
//
//
//	char arr2[] = "192.23.253.63";//IP��ַ�ı�﷽ʽ�����ʮ����
//	char* x = ".";
//	char haha[100] = { 0 };
//	strcpy(haha, arr2);
	//�и�buf�е��ַ���

//	char* ret = strtok(arr, p);//ret����strtok�и�󷵻ص�ָ��
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);//�ڶ����и�
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);//�������и�
//	printf("%s\n", ret);
//	return 0;
//}

//	char* ret = NULL;
//	for (ret = strtok(arr, p);ret != NULL;ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	char* ret2 = NULL;
//	for (ret2 = strtok(arr2, x);ret2 != NULL;ret2 = strtok(NULL, x))
//	{
//		printf("%s\n", ret2);
//	}
//	return 0;
//}



//strerror
//���ش����룬����Ӧ�Ĵ�����Ϣ
//char * strerror(int errnum)

#include<errno.h>//���������ͷ�ļ�
//����ͷ�ļ�����ʹ��strerror(errno)
//int main()
//{
	//������   ������Ϣ
	//0 -       No error
	//1 -       Operation not permitted
	//2 -       No such file or directory
	//...
	//errno ��һ��ȫ�ֵĴ�����ı���
	//��c���ԵĿ⺯����ִ�еĹ����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno
	
	//c���Դ��ļ�
//	FILE* pf = fopen("test.txt", "r");//r->read ���ļ���ͬ·������Ѱ�ң�
//	if (pf == NULL)//֤����������ʧ�ܣ�������Ҫ֪��ʧ�ܵ�ԭ��
//	{ 
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	char* str = strerror(2);
//	printf("%s\n", str);
//	return 0;
//}
