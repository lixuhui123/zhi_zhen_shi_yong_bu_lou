#include <stdio.h>    
#include<stdlib.h>
void changeAddress(int** value);
int main() {
	int arr[] = { 1, 2, 3 };
	int* p = arr;
	// �ı�֮ǰ p �ĵ�ַ    
	printf("%p\n", p);
	// q ��������ı�֮ǰ p �ĵ�ַ    
	int* q = p;
	changeAddress(&p);
	// �ı�֮�� p �ĵ�ַ    
	printf("%p\n", p);
	printf("%d\n", q[0]);
	// ��ַ�ı�Ĳ�ֵ    
	printf("%lu\n", p - q);
	system("pause");
	return 0;
}
void changeAddress(int** value) {
	*value += sizeof(int);
}

//û��, ���˵һ��ָ�������ڶ����ݵĸ���, ��ô����ָ��������ڶ����ݵ�ַ�ĸ���
//�Դ�����, ����ָ����Ƕ����ݵ�ַ�ĵ�ַ�ĸ��¡�