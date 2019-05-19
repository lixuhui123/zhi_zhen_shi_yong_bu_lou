#include <stdio.h>    
#include<stdlib.h>
void changeAddress(int** value);
int main() {
	int arr[] = { 1, 2, 3 };
	int* p = arr;
	// 改变之前 p 的地址    
	printf("%p\n", p);
	// q 用来保存改变之前 p 的地址    
	int* q = p;
	changeAddress(&p);
	// 改变之后 p 的地址    
	printf("%p\n", p);
	printf("%d\n", q[0]);
	// 地址改变的差值    
	printf("%lu\n", p - q);
	system("pause");
	return 0;
}
void changeAddress(int** value) {
	*value += sizeof(int);
}

//没错, 如果说一级指针是用于对数据的更新, 那么二级指针就是用于对数据地址的更新
//以此类推, 三级指针就是对数据地址的地址的更新…