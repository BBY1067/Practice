
#include<stdio.h>
#include<string.h>
//2.Êý×é²Ù×÷
void init(int str[],int sz)
{
	int i = 0;
	for (i = 0;i <sz;i++)
	{
		str[i] = 0;
	}
}
void print(int str[], int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", str[i]);
	}
	printf("\n");
}
void reverse(int str[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <right)
	{
		int tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}
void address(int str[], int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%p\n", &str[i]);
	}
}