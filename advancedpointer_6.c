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

void test()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	test();
	return 0;
}