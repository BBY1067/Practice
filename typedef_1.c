#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

//�������ͣ�c�����Լ�����������
//�Զ����������ͣ��ṹ�壬ö���壬����

//1.�ṹ��

//�ṹ�������������ʽ
/*struct tag
{
	member-list;
};variable-list;*/

struct partner
{
	char name[10];
	char gender[10];
	int salary;
	int workyear;
};p1, p2, p3, p4, p5;//������ȫ�ֱ���

//������ʱ����Բ���ȫ����->�����ṹ�壨ʡ���˽ṹ���ǩtag��
struct
{
	int a;
	char b;
	float c;
}x;//���ʱ�����Ҫ������������Ȼ����ṹ�����������

struct
{
	int a;
	char b;
	float c;
}*p;
//��ʱ��ʹ��p=&x���������﷨������Ϊ��ʹ�����ṹ���Աһ�����������Ի���Ϊ����������ͬ�ĵ�ַ




