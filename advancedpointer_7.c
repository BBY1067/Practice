#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//如何改造冒泡排序，使得其能够排序各种各样的数
//程序员1：写bubble_sort排序函数（该函数需要接受各种类型的参数）
//程序员2：使用该函数（该程序员知道比较什么数据，以及数据的元素怎么比较大小）

//程序员1的工作
//参照qsort(arr，sz，sizeof（arr[])，cmp_int)

void swap(char* x, char* y,int w)
{
	int i = 0;
	for (i = 0;i < w;i++)
	{
		char tmp = 0;
		tmp=*x;
		*x=*y;
		*y = tmp;
		x++;
		y++;
	}
}
void bubble_sort(void* base,int sz,int width,int(*cmp)(void*e1,void*e2))
{
	int i = 0;//趟数
	for (i = 0;i < sz-1;i++)
	{
		int j = 0;
		for (j = 0;j < sz - 1 - i;j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//此种情况需要交换
			{
				//编写一个交换函数
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}


//程序员2的工作：
int cmp_int(const void*e1,const void*e2)//
{
	return (*(int*)e1) - (*(int*)e2);
}
int main()
{
	int arr[10] = { 11,22,55,6,2,1,4,8,9,10 };
	int sz = sizeof(arr);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
