#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

//�ַ������������ַ����������ԣ�
//�����������顢���������顢�ṹ������ʹ���ڴ溯��


//memcpy :�ڴ濽��
//memmove
//memcmp
//memset 

//c���Ա�׼��
//memcpy    ֻҪ�����ص����ڴ濽���Ϳ���ʵ��
//memmove    memcpy+�����ص��ڴ�Ŀ���  

//1.memcpy 
//void *memcpy( void* destination, const void* source,set_t num)
//void * ������ָ��

//����memcpy��source��λ�ÿ�ʼ���ֵnum���ֽ�
//����������\0"��ʱ�򲻻�ͣ����
//���source��destination ���κε��ص������ƵĽ������δ�����
struct s
{
	char name;
	int age;
};
//void* �����κε�ַָ�룬���ǲ������㣬���ܽ�����

//memcpy��Ӧ�� & my_memcpy��ʵ��
#include<assert.h>
void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
//int main()
//{
//	int arr1[] = { 'n','i','c','o','t'};
//	int arr2[5] = { 0 };
//	struct s arr3[]= { {"fuyu",22},{"Yvonne",28} };
//	struct s arr4[3] = { 0 };
//	memcpy(arr2, arr1, 20);
//	for (int i = 0;i < 5;i++)
//	{
//		printf("%c", arr2[i]);
//	}
//	memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}

//2.memmove�������ڴ��ص������
//void *memcpy( void* destination, const void* source,set_t num)
//��ͬһ��������ʹ�ÿ���memmove

//my_memmove��ʵ��
void* my_memmove(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	if(dest<src)
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	else
		while (count--)
		{
			*((char*)dest + count)= *((char*)src + count);
		}
	return ret;
}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	my_memmove(arr + 2, arr, 20);//memcpyҲ����ʵ��
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//3.memcmp  strcmp�Ƚ��ַ���ascii�Ĵ�С��memcmp�Ƚ��ڴ�Ĵ�С
//int memcmp(const void* ptr1, const void* ptr2, size_t num)
// num ����Ƚ϶��ٸ��ֽ�
//1<2 ����һ��С��0��ֵ����ȷ���0�����ڷ��ش���0��ֵ

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,6,8,9 };
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d ", ret);
//	return 0;
//}

//4.memset �ڴ�����

//int main()
//{
//	char arr[10] = "";
//	memset(arr, '#', 10);
//	int arr1[10] = { 0 };
//	memset(arr1, 1, 40);//40���ֽ�
//}
