//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//
//	int b[10];
//	int a[3][4] = { 1,2,3,4,
//		            5,6,7,8,
//		            9,0,11,12 };
//	printf("%d,%d\n", a, *a);//1 a[0] 1
//	printf("%d,%d\n", a, (a+1));// 1 a[1] 5
//	printf("%d,%d\n", *a, *a+1);//1 a[0][1] 2
//	printf("%d,%d,%d,%d\n", **a, *(*a+1),*(*(a+1+1)),*(*a+1+1),*(*(a+1)+3));
//	/*1,2  *a相当于a[0],再加1，就是第二列，然后再*就是a[0][1]
//	*(a+1+1)相当于a[2] *就是a[2][0] 9
//	*a相当于a[0] *a+1+1相当于a[0][2] 3
//	*(a+1)相当于a[1]  *(a+1)+3 相当于a[1][3] 8
//	总结一句话，*(a)相当于a[0];
//	对地址的一次解引用就是它所指向的哪个对象。*(*(a+i)+j)->a[i][j]
//	怎么调用呢，int *(p)[4]=a
//	p++先执行p没加之前的值然后再 ++	*/
//	int (*p)[4] = a;
//	for (p = a; p < a + 3; p++)//一跳跳一行指针变量可以自加
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d", *(*p + j));
//		}
//	}
//	//一维数组数组名取地址符相当于二维数组名
//	system("pause");
//	return 0;
//}