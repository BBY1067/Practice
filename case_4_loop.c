#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<windows.h>//ʹ��sleep��������Ϣһ��
#include<stdlib.h>//ʹ��systemϵͳ����

//��ӡ�ַ�ʹ���ַ����м俿£
// int main()
//{
//	char arr1[] = "welcom to our farm";
//	char arr2[] = "##################";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);//���ַ����� �����ַ������ȣ���������־��������С����+1����Ϊ��\0�Ĵ��ڣ�
//    int left = 0;
//	int right = strlen(arr1) - 1;//strlen���������ַ�������Ч���ȣ�������"\0")
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];//arr1��arr2λ�ò��ɵ�������ֵ���岻ͬ
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);//��λms,ע��Ҫ��дS
//		system("cls");//ִ��ϵͳ����--�����Ļ
//	}
//	printf("%s\n", arr2);
//		return 0;
//}