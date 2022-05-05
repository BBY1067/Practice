#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

//sizeof:总共有多少字节
//strlen:给我一个地址，我从这里数，数到/0

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
	printf("%d\n", sizeof(p));//4,计算指针变量的大小
	printf("%d\n", sizeof(p + 1));//p+1，得到的是字符b的地址
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//int arr[10]  arr[0]==*(arr+0);->p[0]==*(p+0)
	printf("%d\n", sizeof(&p));
	printf("%d\n", sizeof(&p + 1));//跳过p的地址
	printf("%d\n", sizeof(&p[0] + 1));//字符b的地址


	//二维数组
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48  3*4*4
	printf("%d\n", sizeof(a[0][0]));//4  第一个元素的大小
	printf("%d\n", sizeof(a[0]));//16  第一行4个元素的大小，相当于把a看成一元数组，相当于求sizeof(arr[0]);
	printf("%d\n", sizeof(a[0]+1));//4\8  地址的大小：第一行第二个元素的地址，a[0]放表达式中==首元素地址
	printf("%d\n", sizeof(*(a[0] + 1)));//4  第一行第二个元素的大小
	printf("%d\n", sizeof(a + 1));//！！！！第二行的地址，a是第一行的地址
	//a是二维数组的数组名，没有sizeof(a),也没有&a,所以a是首元素（第一行）地址
	printf("%d\n", sizeof(&a[0] + 1));//第二行的地址
	printf("%d\n", sizeof(*(&a[0] + 1)));//第二行4个元素的大小
	printf("%d\n", sizeof(*a));//首元素地址，第一行地址
	printf("%d\n", sizeof(a[3]));//16   !!!!虽然a[3]超出范围，但sizeof会根据之前的类型来计算，a[3]不会真的访问第四行

}
