#include<stdio.h>
#include<stdlib.h>
#include<string>
int main()
{
	//��ά����
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//48
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0]));//16
	//printf("%d\n", sizeof(a[0] + 1));//4 ��ַ
	//printf("%d\n", sizeof(*(a[0] + 1)));//4 int
	//printf("%d\n", sizeof(a + 1));//��ַ
	//printf("%d\n", sizeof(*(a + 1)));//a[1]16
	//printf("%d\n", sizeof(&a[0] + 1));//4 &a[0]][1]
	//printf("%d\n", sizeof(*(&a[0] + 1)));// a[0][1] 16 �Եڶ��н�����
	//printf("%d\n", sizeof(*a));//16 a[0]
	//printf("%d\n", sizeof(a[3]));//16

	/*int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = (int *)(&a + 1);//���������������ȥ�ĵ�ַ
	printf("%d,%d", *(a + 1), *(ptr - 1));//2  5*/
	

	//int a = 6;
	//int *p = &a;
	//printf("%p\n", p);
	//printf("%p\n", p+0x1);//p�Ļ�������int +1 ���Ǽ�һ��int��ռ���ֽڿռ�
	//printf("%p\n", (unsigned long)p+0x1);//ת������+1
	//printf("%p\n", (short *)p+0x1);//short ռ�����ֽڼ������ֽ�
	 
	//int a[4] = { 1, 2, 3, 4 };//
	//int *ptr1 = (int *)(&a + 1);
	//int *ptr2 = (int *)((int)a + 1);
	//printf("%x,%x", ptr1[-1], *ptr2);//4,2000000
	
 //   const char *c[] = { "ENTER","NEW","POINT","FIRST" };
	//const char**cp[] = { (c + 3),c + 2,c + 1,c };
	//const char***cpp = cp;
	//printf("%s\n", **++cpp);
	//printf("%s\n", *--*++cpp + 3);
	//printf("%s\n", *cpp[-2] + 3);
	//printf("%s\n", cpp[-1][-1] + 1);//*(*(cpp-1)-1)+1

 //  const char *a[] = { "work","at","alibaba" };
	//const char**pa = a;
	//pa++;
	//printf("%s\n", *pa);//at 

	//int a[3][2] = { (0, 1), (2, 3), (4, 5) };//{1,3,5,0,0,0}
	//int *p;
	//p = a[0];
	//printf("%d", p[0]);//1

	//int a[4] = { 1, 2, 3, 4 };
	//int *ptr1 = (int *)(&a + 1);
	//int *ptr2 = (int *)((int)a + 1);
	//printf("%x,%x\n", ptr1[-1], *ptr2);//4,2000000
	//printf("%p",a);
	//���ڴ���1�Ĵ淨�� 00000001 00000000 00000000 00000000
	//2                 00000010 00000000 00000000 00000000
	//(int)a+1 ��������+1��ָ������һ���ֽڣ�����ڴ��С�˴洢��ʽӦ�ö�������
	//00000010 00000000 00000000 00000000 //%x ʮ������ 2000000

	/*const char *str[] = { "welcome","to","fortemedia","nanjing" };
	const char **p = str + 1;
	str[0] = (*p++) + 2;
	str[1] = *(p + 1);
	str[2] = p[1] + 3;
	str[3] = p[0] + (str[2] - str[1]);
	printf("%s\n", str[0]);
	printf("%s\n", str[1]);
	printf("%s\n", str[2]);
	printf("%s\n", str[3]);
	printf("%d\n", str[2] - str[1]);*/
	system("pause");
	return 0;
}