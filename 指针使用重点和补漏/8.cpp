#include<stdio.h>
#include<stdlib.h>
#include<string>
int main()
{
	char arr[] = { 1,2,3,4,5,6 };
	printf("%d", strlen(&arr + 1));//char *(p)[6]
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6
	printf("%d\n", sizeof(arr + 0));//4 ��ֵַ
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr + 1));//4
	printf("%d\n", sizeof(&arr[0] + 1));//ָ��+1
	printf("%d\n", strlen(arr));//���
	printf("%d\n", strlen(arr + 0));//���
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
	printf("%d\n", strlen(*arr));// strlen������char *����
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));//char (*)[7]
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));//5��arr[0]�ĵ�ַ�ϼ�һ��char
	 const char *p = "abcdef";
	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(p + 1));//4
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//*(p+0)1 a 
	printf("%d\n", sizeof(&p));//4 **
	printf("%d\n", sizeof(&p + 1));//4
	printf("%d\n", sizeof(&p[0] + 1));//4
	printf("%d\n", strlen(p));//6 ����ֻҪ��char *���͵�ַ���������ַ��ʼ�����ҡ�\0��
	printf("%d\n", strlen(p + 1));//5
	printf("%d\n", strlen(*p));//char *
	printf("%d\n", strlen(p[0]));//char
	printf("%d\n", strlen(&p));//char **
	printf("%d\n", strlen(&p + 1));//char **
	printf("%d\n", strlen(&p[0] + 1));//5 &p[0]=p
	system("pause");
	return 0;
}