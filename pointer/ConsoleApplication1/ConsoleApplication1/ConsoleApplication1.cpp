// ConsoleApplication1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

/*int global = 300;*/
void swap(int*, int*);
int main()
{
	/*static int a = 20;
	int b = 30;
	int * p = (int *)malloc(sizeof(int));
	*p = 150;
	printf("���� ���� global=%3d &global=%d\n", global, &global);
	printf("���� ���� a=%3d &a=%d\n", a, &a);
	printf("���� ���� b=%3d &b=%d\n", b, &b);
	printf("������ *p=%3d p=%d\n", *p, p);
	printf("������ *p=%3d &p=%d\n", *p, &p);
	*/
	/*int a = 10;
	char b = 'A';
	double c = 1234.56f;
	int *ptr1 = &a;
	char *ptr2 = &b;
	double *ptr3 = &c;
	
	printf("int �� a�� �� %d, �ּ� %d , ũ�� %d\n", a, &a, sizeof(a));
	printf("char �� b�� �� %c, �ּ� %d , ũ�� %d\n", b, &b, sizeof(b));
	printf("double �� c�� �� %f, �ּ� %d , ũ�� %d\n", c, &c, sizeof(c));
	printf("int �� ������ ptr1�� �� %d, �ּ� %d , ũ�� %d\n", ptr1, &ptr1, sizeof(ptr1));
	printf("char �� ������ ptr2�� �� %d, �ּ� %d , ũ�� %d\n", ptr2, &ptr2, sizeof(ptr2));
	printf("double �� ������ ptr3�� �� %d, �ּ� %d , ũ�� %d\n", ptr3, &ptr3, sizeof(ptr3));
	*/
	/*int nData = 10;
	int *pnData = &nData;
	printf("%d, %d\n", nData, *pnData);
	printf("%p, %p\n", &nData, pnData);
	*pnData += 20;
	printf("%d\n", nData);
	*/
	int a = 3;
	int b = 10;
	swap(&a, &b);
	printf("3. �Լ� ȣ�� ��-> a : %d, b : %d\n", a, b);
    return 0;
}
void swap(int *a, int* b)
{
	int temp = 0;
	printf("1. ���� ��-> a : %d, b : %d\n", *a, *b);
	temp = *a;
	*a = *b;
	*b = temp;
	printf("2. ���� ��-> a : %d, b : %d\n", *a, *b);
}
