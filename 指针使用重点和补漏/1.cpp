//arr和&arr到底是啥
#include <stdio.h>
#include<stdlib.h>
//void print_arr1(int arr[3][5], int row, int col)
//{
//	
//		int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//}
//void print_arr2(int(*arr)[5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
int main1()
{
	/*int arr[10] = { 0 };
	printf("arr= %p\n", arr);
	printf("&arr= %p\n", &arr);
	printf("arr+1= %p\n", arr + 1);
	printf("&arr+1= %p\n", &arr + 1);*/
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	//int(*p)[10] = &arr;//把数组arr的地址赋值给数组指针变量p 区别二维数组的数组名
	////但是我们一般很少这样写代码
	//int arr[3][5] = { 1,2,3,4,5,
	//	              6,7,8,9,10 };
	//print_arr1(arr, 3, 5);//int (*)[5]
	/*数组名arr，表示首元素的地址
	但是二维数组的首元素是二维数组的第一行,行指针，数组指针。
	所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
	可以数组指针来接收*/
	//print_arr2(arr, 3, 5);
	int arr[5];//数组
	int *parr1[10];//指针数组，元素是指针，可以定义指向
	int(*parr2)[10];//数组指针
	int(*parr3[10])[5];//数组指针数组
	system("pause");
	return 0;
}