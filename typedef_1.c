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

//struct partner
//{
//	char name[10];
//	char gender[10];
//	int salary;
//	int workyear;
//};p1, p2, p3, p4, p5;//������ȫ�ֱ���
//
////������ʱ����Բ���ȫ����->�����ṹ�壨ʡ���˽ṹ���ǩtag��
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;//���ʱ�����Ҫ������������Ȼ����ṹ�����������
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}*p;
//��ʱ��ʹ��p=&x���������﷨������Ϊ��ʹ�����ṹ���Աһ�����������Ի���Ϊ����������ͬ�ĵ�ַ
//�����ṹ��ֻ����һ�Σ���������


//2.�ṹ���������
//(����ṹ)

//struct node
//{
//	int data;
//	struct node next;//����������÷�ʽ�� Sizeof��sturct node��̫��
//};

//��ȷ�������÷�ʽ

//struct node
//{
//	int data; //4 byte
//	struct node* next;// 4/8 byte
//};


//������Ľṹ�����ͽ���������

typedef struct node
{
	int data; //4 byte
	struct node* next;// 4/8 byte
}node;//������ʱ��ò�Ҫʹ������



//3.�ṹ������Ķ���ͳ�ʼ��
//struct client
//{
//	char name[10];
//	double month;
//	char contry[20];
//};
//typedef struct member
//{
//	char name[10];
//	int age;
//	int salary;
//	struct client c1;
//}member;
//
//int main()
//{
//	member m1 = { "yv",28,30000,{"AVA",1.33,"Russia"}};
//	printf("%s\n%d\n%d\n%s\n%lf\n%s\n", m1.name, m1.age, m1.salary, m1.c1.name, m1.c1.month, m1.c1.contry);
//	return 0;
//}


//4.�ṹ���ڴ����

struct s
{
	char a;
	int b;
	char c;
};

struct c
{
	char a;
	char b;
	int c;
};
struct e
{
	char a;
	int c;
	struct c c1;
};

//int main()
//{
//	struct s s1 = { 0 };
//	struct c c1 = { 0 };
//	struct e e1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(c1));
//	printf("%d\n", sizeof(c1));
//	return 0;
//}

//�ṹ��Ķ�����򣨽ṹ��ᡰ�˷ѡ���һЩ�ڴ棩
//1.��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ��
//2.������Ա����Ҫ���䵽ĳ������(������)���������ĵ�ַ��������c1�ṹ���е�Int c���뵽��ʼ��ַ+4�ĵط���ʼ��

//��������������Ĭ�ϵ�һ�������� �� �ó�Ա��С�Ľ�Сֵ��vs��Ĭ��Ϊ8
//3.�ṹ���ܴ�СΪ����������ÿ����Ա��������һ������������������!!!!!!!!!!!!!!!!!!!!!!!!!!
//4.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ�����������������������
//�ṹ��������С��������������������Ƕ�׽ṹ��Ķ���������������

//Ϊ�˷����ȡ
//�������������ͼ��ݷ��飬���ܰ��Ű��ŷţ�������
//�ܽ᣺�ṹ����룬���������ռ䣬��Լʱ��
//->����ƽṹ���ʱ����μ�Ҫ���룬��Ҫ��Լ�ռ䣺��ռ�ÿռ�С�ĳ�Ա����������һ��


//5.�޸�Ĭ�϶����� #pragmaԤ����ָ��

#include<stddef.h>//ʹ��offsetof

#pragma pack(4)//����Ĭ�϶�����Ϊ4
struct n
{
	char a;
	int b;
	double c;
};
#pragma pack()//ȡ�����õ�Ĭ�϶�����
//Ĭ�϶�����Ϊ1�Ļ����ͱ�ɰ��Ű��ŷ���


//6.offsetof�꣺�ṹ���Ա����ڽṹ����ʼλ�õ�ƫ�����Ƕ���

//int main()
//{
//	printf("%d",offsetof(struct n, c));
//	return 0;
//}


//7.�ṹ�崫��

void init(struct n* p)
{
	p->a = 'c';
	p->b = 2;
	p->c = 3.14;
}
void print1(struct n nn)
{
	printf("%c %d %lf", nn.a, nn.b, nn.c);
}
void print2(struct n* p)
{
	printf("%c %d %lf", p->a, p->b, p->c);
}
int main()
{
	struct n n1 = { 0 };
	init(&n1);
	print1(n1);
	print2(&n1);//2��ã��ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ�1���ܻ���������½�
	return 0;
}