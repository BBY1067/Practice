#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

//sizeof:�ܹ��ж����ֽ�
//strlen:����һ����ַ���Ҵ�������������/0

int main()
{
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr+0));
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr+1));
	printf("%d\n", strlen(&arr[0]+1));

	char* p = "abcdef";
	printf("%d\n", sizeof(p));//4,����ָ������Ĵ�С
	printf("%d\n", sizeof(p + 1));//p+1���õ������ַ�b�ĵ�ַ
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//int arr[10]  arr[0]==*(arr+0);->p[0]==*(p+0)
	printf("%d\n", sizeof(&p));
	printf("%d\n", sizeof(&p + 1));//����p�ĵ�ַ
	printf("%d\n", sizeof(&p[0] + 1));//�ַ�b�ĵ�ַ


	//��ά����
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48  3*4*4
	printf("%d\n", sizeof(a[0][0]));//4  ��һ��Ԫ�صĴ�С
	printf("%d\n", sizeof(a[0]));//16  ��һ��4��Ԫ�صĴ�С���൱�ڰ�a����һԪ���飬�൱����sizeof(arr[0]);
	printf("%d\n", sizeof(a[0]+1));//4\8  ��ַ�Ĵ�С����һ�еڶ���Ԫ�صĵ�ַ��a[0]�ű��ʽ��==��Ԫ�ص�ַ
	printf("%d\n", sizeof(*(a[0] + 1)));//4  ��һ�еڶ���Ԫ�صĴ�С
	printf("%d\n", sizeof(a + 1));//���������ڶ��еĵ�ַ��a�ǵ�һ�еĵ�ַ
	//a�Ƕ�ά�������������û��sizeof(a),Ҳû��&a,����a����Ԫ�أ���һ�У���ַ
	printf("%d\n", sizeof(&a[0] + 1));//�ڶ��еĵ�ַ
	printf("%d\n", sizeof(*(&a[0] + 1)));//�ڶ���4��Ԫ�صĴ�С
	printf("%d\n", sizeof(*a));//��Ԫ�ص�ַ����һ�е�ַ
	printf("%d\n", sizeof(a[3]));//16   !!!!��Ȼa[3]������Χ����sizeof�����֮ǰ�����������㣬a[3]������ķ��ʵ�����

}
