#include<stdio.h>
#include<stdlib.h>
#include<string>
int main()
{
	char arr[] = { 1,2,3,4,5,6 };
	printf("%d", strlen(&arr + 1));//char *(p)[6]
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6
	printf("%d\n", sizeof(arr + 0));//4 地址值
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr + 1));//4
	printf("%d\n", sizeof(&arr[0] + 1));//指针+1
	printf("%d\n", strlen(arr));//随便
	printf("%d\n", strlen(arr + 0));//随便
	printf("%d\n", strlen(*arr));//char arr[0]
	printf("%d\n", strlen(arr[1]));//char 
	printf("%d\n", strlen(&arr));//char (*)[6]
	printf("%d\n", strlen(&arr + 1));//char (*)[6]
	printf("%d\n", strlen(&arr[0] + 1));//char *
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));//7
	printf("%d\n", sizeof(arr + 0));//4
	printf("%d\n", sizeof(*arr));//4
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr + 1));//4
	printf("%d\n", sizeof(&arr[0] + 1));//4
	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	printf("%d\n", strlen(*arr));// strlen必须是char *类型
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));//char (*)[7]
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));//5在arr[0]的地址上加一个char
	 const char *p = "abcdef";
	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(p + 1));//4
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//*(p+0)1 a 
	printf("%d\n", sizeof(&p));//4 **
	printf("%d\n", sizeof(&p + 1));//4
	printf("%d\n", sizeof(&p[0] + 1));//4
	printf("%d\n", strlen(p));//6 后面只要是char *类型地址，从这个地址开始往后找‘\0’
	printf("%d\n", strlen(p + 1));//5
	printf("%d\n", strlen(*p));//char *
	printf("%d\n", strlen(p[0]));//char
	printf("%d\n", strlen(&p));//char **
	printf("%d\n", strlen(&p + 1));//char **
	printf("%d\n", strlen(&p[0] + 1));//5 &p[0]=p
	system("pause");
	return 0;
}