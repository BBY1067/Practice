#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//��ӡ����ĵ�ַ
//int main()
//{
//	int i = 0;
//	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		int a=&arr[i];
//		printf("arr[%d]=%p\n", i, a);
//	}
//	return 0;
//}

//��ӡ��ά����ĵ�ַ
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8 };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 4;j++)
//		{
//			printf("arr[%d][%d]=%p\n",i,j,&arr[i][j]);
//		}
//	}
//	return 0;
//}

//ð������
//void bubble(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz-1;i++)//ȷ��ð�����������������10��������ֻ��Ҫ�žŸ���
//	{
//		int flag = 1;//���������Ѿ���˳������
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)//ÿ����Ҫ�ԱȵĴ���������ڶ���ֻ�öԱ�8�ξͿ�
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tem;
//					flag = 0;//����û�а���˳�����У���ֵ
//			}
//			if (flag == 1)//��һ�����鼴��˳�����У�û�н���ѭ������ֵ���˳�ѭ��
//				break;//breakֻ������for��switch֮�����䣬��������if������if�����ѭ������г��֣������ʹ��
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr,sz);
//	int a = 0;
//	for (a = 0;a < sz;a++)
//	{
//		printf("%d", arr[a]);
//	}
//	return 0;
//}

//������
int main()
{
	int arr[] = { 1,2,3,4,5 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);
	printf("%d\n", *arr);
	printf("%d\n", sizeof(arr));
	return 0;
}