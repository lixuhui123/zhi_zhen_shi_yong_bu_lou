//arr��&arr������ɶ
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
	//int(*p)[10] = &arr;//������arr�ĵ�ַ��ֵ������ָ�����p �����ά�����������
	////��������һ���������д����
	//int arr[3][5] = { 1,2,3,4,5,
	//	              6,7,8,9,10 };
	//print_arr1(arr, 3, 5);//int (*)[5]
	/*������arr����ʾ��Ԫ�صĵ�ַ
	���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��,��ָ�룬����ָ�롣
	�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
	��������ָ��������*/
	//print_arr2(arr, 3, 5);
	int arr[5];//����
	int *parr1[10];//ָ�����飬Ԫ����ָ�룬���Զ���ָ��
	int(*parr2)[10];//����ָ��
	int(*parr3[10])[5];//����ָ������
	system("pause");
	return 0;
}