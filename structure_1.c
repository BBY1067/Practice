#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//1.�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
//��Ϊ�����г��ֵĶ���������һ�����Ӷ��󣬲���ֻ����int float char ���������������˽ṹ�����

//����һ��ѧ�������֣����䣬�绰���Ա�
//struct�ǽṹ��ؼ���  stu�ǽṹ���ǩ struct stu�ǽṹ������

//struct stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char gender[5];
//}s1,s2,s3;//������һ���ṹ�����ͣ�δռ���ڴ�ռ�
//��ʱ�ֶ����˱�����s1��s2��s3������ȫ�ֵĽṹ�����

//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char gender[5];
//}stu;//��������struct stu Ϊstu
//int main()
//{
//	struct stu fu;//�����ṹ��������ֲ��Ľṹ����� 
// }

//2.�ṹ��Ա�����ͣ������Ǳ��������顢ָ�������������ṹ��

//�ṹ���а����ṹ��
//struct stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char gender[10];
//};
//
//struct class
//{
//	struct stu s;//�����ṹ��
//	int population;
//	int grade;
//	char classname[10];
//};
//int main()
//{
//	struct class c = { {"fuyu",22,"123456789","female"},55,2,"happy"};
//	printf("%s\n", c.s.name);//��ӡ�ṹ���еĽṹ��
//	printf("%d\n", c.population);
//	return 0;
//}

//3.�ṹ���Ա�ķ��ʣ�./->
//�ṹ�崫��
//�������ε�ʱ�򣬲�������Ҫѹջ������һ��Ԫ�ؽ�ѹջ�������ԵĽг�ջ���ģ��������һ���ṹ������ʱ��
//�ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½�
typedef struct stu
{
	char name[10];
	int age;
	char gender[10];
}r;
void print1(r tmp)//�ṹ�����ַ����ó�Ա��.��
{
	printf("name=%s\n", tmp.name);
	printf("age=%d\n", tmp.age);
	printf("gender=%s\n", tmp.gender);
}
void print2(r* s)//�ṹ��ָ����ʳ�Ա�á�->��
{
	printf("name=%s\n", s->name);
	printf("name=%d\n", s->age);
	printf("name=%s\n", s->gender);
}
int main()
{
	r s1={ "nicot",20,"Ů" };
	print1(s1);
	print2(&s1);
	return 0;
}
//���ۣ��ṹ�崫��Ҫ���ṹ��ĵ�ַ


