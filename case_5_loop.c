#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<windows.h>


//ģ���û���¼
// int main()
//{
//	char password[]= "fuyu2000";
//	char input[20] = { 0 };
//	int i = 1;
//	int n = 0;
//	int sz = sizeof(password) / sizeof(password[0]);
//	printf("����������:");
//	scanf("%s", input);
//	for(n=0;n<=sz;n++)
//	{
//		if (password[n] == input[n])
//			n++;
//		else
//		{
//			printf("��������������:");
//			scanf("%s", input);
//			i++;
//			if (i > 3)
//				printf("����������࣬��ʱ�޷���¼");
//		}
//	}
//	printf("��¼�ɹ�");
//	return 0;
//}

//ʾ������
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 1;i <= 3;i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "fuyu2000") == 0)//strcmp��������0ʱ�����ַ�����ͬ��>0ʱǰ�����ϴ�ͬ��
//		{
//			printf("��¼�ɹ�");
//			break;
//		}
//	}
//	if (i > 3)
//		printf("��¼ʧ��");
//	return 0;
//}