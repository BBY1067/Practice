#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

//字符串函数操作字符串（局限性）
//对于整形数组、浮点型数组、结构体数组使用内存函数


//memcpy :内存拷贝
//memmove
//memcmp
//memset 

//c语言标准：
//memcpy    只要处理不重叠的内存拷贝就可以实现
//memmove    memcpy+处理重叠内存的拷贝  

//1.memcpy 
//void *memcpy( void* destination, const void* source,set_t num)
//void * 无类型指针

//函数memcpy从source的位置开始向后赋值num个字节
//函数遇到”\0"的时候不会停下来
//如果source和destination 有任何的重叠，复制的结果都是未定义的
struct s
{
	char name;
	int age;
};
//void* 接受任何地址指针，但是不能运算，不能解引用

//memcpy的应用 & my_memcpy的实现
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

//2.memmove，处理内存重叠的情况
//void *memcpy( void* destination, const void* source,set_t num)
//在同一个数组中使用拷贝memmove

//my_memmove的实现
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
//	my_memmove(arr + 2, arr, 20);//memcpy也可以实现
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//3.memcmp  strcmp比较字符串ascii的大小，memcmp比较内存的大小
//int memcmp(const void* ptr1, const void* ptr2, size_t num)
// num 代表比较多少个字节
//1<2 返回一个小于0的值，相等返回0，大于返回大于0的值

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,6,8,9 };
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d ", ret);
//	return 0;
//}

//4.memset 内存设置

//int main()
//{
//	char arr[10] = "";
//	memset(arr, '#', 10);
//	int arr1[10] = { 0 };
//	memset(arr1, 1, 40);//40个字节
//}
