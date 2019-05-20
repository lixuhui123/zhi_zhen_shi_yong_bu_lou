//#include<stdio.h>
//#include<stdlib.h>
////指针数组
////它的用法其实不在于整数，而在于字符数组
//
//int main()
//{
//	const char *name[5] = { "zhangsan","lisi","wangmazi","gousheng","aassdfsad" };
//	printf("%s", name[1]);
//	const char *arr[] = { "aaaa","dddd","cccc","bbbb" };
//    const char *strings[7] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
//	/*const char *strings[7];
//    strings = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };*/
//	//数组名不能放在左值
//	//数组名是一个指针常量，也就是第一个元素的地址，它的类型取决于数组数据元素的类型。
//	//我这样赋值相当于修改指针常量，所以报错。如果想对指针数组赋值，需要用一个for或while循环。
//	/*int a[3][4] = { 1,2,3,4,5,6,7,8,9 };
//	int *p[4];
//	int i = 0;
//	for (i = 0; i < 3; ++i)
//	{
//		p[i] = a[i];
//		
//	}
//	for (i = 0; i < 3; ++i)
//	{
//		for (int j = 0; j < 4; ++j)
//		{
//			printf("%d", *(p[i] + j));
//
//		}
//	}*/
//	system("pause");
//	return 0;
//}