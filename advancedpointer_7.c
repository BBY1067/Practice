#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//��θ���ð������ʹ�����ܹ�������ָ�������
//����Ա1��дbubble_sort���������ú�����Ҫ���ܸ������͵Ĳ�����
//����Ա2��ʹ�øú������ó���Ա֪���Ƚ�ʲô���ݣ��Լ����ݵ�Ԫ����ô�Ƚϴ�С��

//����Ա1�Ĺ���
//����qsort(arr��sz��sizeof��arr[])��cmp_int)

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
	int i = 0;//����
	for (i = 0;i < sz-1;i++)
	{
		int j = 0;
		for (j = 0;j < sz - 1 - i;j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//���������Ҫ����
			{
				//��дһ����������
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}


//����Ա2�Ĺ�����
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
