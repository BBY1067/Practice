#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

//���ԭ����ֱ������ȷ�ϲ���
// int main()
//{
//	int a = 0;
//	char password[20] = { 0 };
//	printf("�������룺");
//	scanf("%s", password);//����Ϊ�׵�ַ���˴�����ʹ�á�&��
//	printf("�Ƿ�ȷ�ϣ�Y/N����");
//	a = getchar();
//	if (a == 'Y')
//		printf("�ɹ�");
//	else
//		printf("ȡ��");
//	return 0;
//}


int main()
{
	int a = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("please enter your password:");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')//�˴�����ʹ��getchar();
	{
		;//����getcharֻ����һ���ַ�,��Ҫ�ظ�ʹ�ã�while���Խ��
	}
	printf("would you like to confim?(y/n):");
	a = getchar();//getchar�����ַ������ַ�ת��ΪASCII�룬����a���ܵ������֣�Ӧ��Ϊ�������� int a
	if (a == 'y')
		printf("success");
	else
		printf("cancel");
		return 0;
}