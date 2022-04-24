#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//复习冒泡排序 ->引出回调函数qsort

//void Bubblesort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz-1;i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0;j < sz -1- i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubblesort(arr, sz);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//冒泡排序只能整数
// 
//如果有一个结构体数组，将如何比较？
//struct stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct stu s[3] = { {"da",20},{"fu",22},{"wa",30}};
//	return 0;
//}
//qsort-库函数-排序（quick sort）在MSDN查阅



//void qsort(void* base,//目标数组的起始位置
//	size_t num,//数组元素的大小
//	size_t width,//元素的字节，用sizeof
//	int(*compare)(const void* elem1, const void* elem2)
//	//elem1和2是你要比较两个元素的地址，且比较函数有要求
//);

//->void*（无类型指针，p的类型随意，谁都能放）
//但是对于void*类型的指针是不能进行解引用操作的，也不能进行+-整数的操作
#include<stdlib.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int cmp_float(const void* e1, const void* e2)
{
	/*return *(float*)e1 - *(float*)e2;*///此处会有警告，因为函数要求返回整形
	if (*(float*)e1 == *(float*)e2)
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;
}

void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void test2()
{
	float arr2[5] = { 2.3,3.8,2.1,2.5,2.7 };
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	qsort(arr2, sz, sizeof(arr2[0]), cmp_float);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%f ", arr2[i]);
	}
	printf("\n");
}
struct stu
{
	char name[10];
	int age;
};
int cmp_struct_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
int cmp_struct_name(const void* e1, const void* e2)
{
	//比较字符串使用strcmp，它会比较字母的ASCII码值，有一个字母不同即结束比较（可比较汉字）
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void test3()
{
	struct stu business[3] = { {"fu",21},{"yv",28},{"frank",40} };
	int sz = sizeof(business) / sizeof(business[0]);
	qsort(business, sz, sizeof(business[0]), cmp_struct_age);
	qsort(business, sz, sizeof(business[0]), cmp_struct_age);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ",business[i].age);
	}
	printf("\n");
	int j = 0;
	for (j = 0;j < sz;j++)
	{
		printf("%d ", business[j].name);
	}
}
int main()
{
	test1();//int
	test2();//float
	test3();//struct
	return 0;
}