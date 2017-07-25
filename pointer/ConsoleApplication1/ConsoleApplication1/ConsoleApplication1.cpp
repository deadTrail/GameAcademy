// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define SMALL 4
#define BIG 8
/*int global = 300;*/
//void swap(int*, int*);
/*int Min(int num1, int num2)
{
	return num1 < num2 ? num1 : num2;
}
int Max(int num1, int num2)
{
	return num1 > num2 ? num1 : num2;
}*/
/*void Compare(int num1, int num2, int*min, int*max)
{
	*min = num1 < num2 ? num1 : num2;
	*max = num1 > num2 ? num1 : num2;
}*/
//int ArrayAdd(int*, int);
//void Swap(char*, char*);
//int ArrayMaxVal(int[], int);
int main()
{
	/*static int a = 20;
	int b = 30;
	int * p = (int *)malloc(sizeof(int));
	*p = 150;
	printf("전역 변수 global=%3d &global=%d\n", global, &global);
	printf("정적 변수 a=%3d &a=%d\n", a, &a);
	printf("지역 변수 b=%3d &b=%d\n", b, &b);
	printf("포인터 *p=%3d p=%d\n", *p, p);
	printf("포인터 *p=%3d &p=%d\n", *p, &p);
	*/

	/*int a = 10;
	char b = 'A';
	double c = 1234.56f;
	int *ptr1 = &a;
	char *ptr2 = &b;
	double *ptr3 = &c;
	
	printf("int 형 a의 값 %d, 주소 %d , 크기 %d\n", a, &a, sizeof(a));
	printf("char 형 b의 값 %c, 주소 %d , 크기 %d\n", b, &b, sizeof(b));
	printf("double 형 c의 값 %f, 주소 %d , 크기 %d\n", c, &c, sizeof(c));
	printf("int 형 포인터 ptr1의 값 %d, 주소 %d , 크기 %d\n", ptr1, &ptr1, sizeof(ptr1));
	printf("char 형 포인터 ptr2의 값 %d, 주소 %d , 크기 %d\n", ptr2, &ptr2, sizeof(ptr2));
	printf("double 형 포인터 ptr3의 값 %d, 주소 %d , 크기 %d\n", ptr3, &ptr3, sizeof(ptr3));
	*/

	/*int nData = 10;
	int *pnData = &nData;
	printf("%d, %d\n", nData, *pnData);
	printf("%p, %p\n", &nData, pnData);
	*pnData += 20;
	printf("%d\n", nData);
	*/

	/*int a = 3;
	int b = 10;
	swap(&a, &b);
	printf("3. 함수 호출 후-> a : %d, b : %d\n", a, b);*/
	
	/*char c = 'A';
	int n = 3;
	float f = 3.14;
	double d = 3.141597;

	char*pc = &c;
	int*pn = &n;
	float *pf = &f;
	double * pd = &d;

	printf("%c \n", ++(*pc));
	printf("%d \n", ++(*pn));
	printf("%f \n", ++(*pf));
	printf("%lf \n", ++(*pd));*/

	/*void *ptr = NULL;
	int nData = 10;
	float fData = 1.234;
	ptr = &nData;
	printf("포인터의 값 : %d\n", *((int *)ptr));
	ptr = &fData;
	printf("포인터의 값 : %lf\n", *((float *)ptr));*/

	/*char str1[5] = "abcd";
	char *str2 = "ABCD";

	printf("%s \n", str1);
	printf("%s \n", str2);

	str1[0] = 'X';
	//*(str1 + 1) = 'Z';
	printf("%s \n", str1);
	printf("%s \n", str2);*/
	//-------------------------------------------------
	//array 와 포인터
	/*int arr[3] = { 10,20,30 };
	int *ptr = &arr[0];
	printf("%d %3d \n", ptr[0], arr[0]);
	printf("%d %3d \n", ptr[1], arr[1]);
	printf("%d %3d \n", ptr[2], arr[2]);
	printf("%d %3d \n", *ptr, *arr);
	printf("%d %3d \n", *(ptr+0), *(arr+0));
	printf("%d %3d \n", *(ptr + 1), *(arr + 1));
	printf("%d %3d \n", *(ptr + 2), *(arr + 2));*/

	/*int arr[5];
	int*pArr = arr;

	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(pArr));*/

	/*int array[3] = { 0,1,2 };

	printf("array의 값 : %d \n", array);
	printf("&array의 주소: %d\n", &array);
	printf("array + 1 : %d \n", array+1);
	printf("&array + 1: %d\n", &array + 1);
	printf("&array + 2: %d\n", &array+2);
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n",array + i);
	}*/
	//-------------------------------------------------
	//call by reference
	/*int num1 = 10, num2 = 13;
	int min = 0, max = 0;
	Compare(num1, num2, &min, &max);
	printf("%d와 %d 중 큰 수는 %d 이고 작은 수는 %d 입니다.\n", num1, num2, max, min);
	*/

	//---------------------------------------------------------------
	//pointer array
	/*int a = 10, b = 20, c = 30;
	int *pArr[3] = { &a,&b,&c };
	printf("%d,%10d,%3d \n", &a, pArr[0], *pArr[0]);
	printf("%d,%10d,%3d \n", &b, pArr[1], *pArr[1]);
	printf("%d,%10d,%3d \n", &c, pArr[2], *pArr[2]);*/

	/*char * pArr[3] = { "C 언어", "C ++ 언어","C# 언어" };

	printf("%s\n", pArr[0]);
	printf("%s\n", pArr[1]);
	printf("%s\n", pArr[2]);*/

	/*int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 5,6,7,8 };
	int arr3[4] = { 9,10,11,12 };
	int *pArr[3] = { arr1,arr2,arr3 };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%4d", pArr[i][j]);
		}
		printf("\n");
	}*/

	/*int arr[5] = { 2,3,5,7,11 };
	int size = (sizeof(arr) / sizeof(int));
	printf("배열의 총 합은 %d 입니다.\n", ArrayAdd(arr, size));
	*/

	/*int arr[20] = { 0, };
	srand((unsigned int)time(NULL));
	int size = (sizeof(arr) / sizeof(int));
	for(int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		printf("%4d", arr[i]);
	}
	printf("\n배열 중 가장 큰 값은 %d 입니다.", ArrayMaxVal(arr, size));
	*/

	/*char *pstr1 = "bear";
	char *pstr2 = "rabbit";
	printf("1.바꾸기 전 pstr1 = %s, pstr2 = %s\n", pstr1, pstr2);
	Swap(&pstr1, &pstr2);
	printf("2.바꾸기 후 pstr1 = %s, pstr2 = %s\n", pstr1, pstr2);
	*/

	/*int *pBuffer = (int*)malloc(sizeof(int) * 100);
	printf("버퍼에 할당된 메모리의 크기 : %2d Byte\n", sizeof(pBuffer));
	printf("버퍼에 할당된 메모리의 크기 : %2d Byte\n", _msize(pBuffer));

	free(pBuffer);
	*/

	/*int length = 0;
	int *pList = NULL;

	printf("배열의 길이를 입력 하세요:");
	scanf_s("%d", &length);
	pList = (int*)malloc(sizeof(int)*length);
	for (int i = 0; i < length; i++)
	{
		pList[i] = i + 1;
		printf("pList[%d] : %3d \n", i, pList[i]);
	}
	printf("\n");
	free(pList);
	*/
	
	/*int*ptr = (int*)malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; i++)
	{
		*(ptr + i) = i;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("ptr + %d 의 주소: %p\t", i, (ptr + i));
		printf("*(ptr + %d): %d \n", i, *(ptr + i));
	}

	char*cptr = (char*)malloc(sizeof(char) * 10);
	for (int i = 0; i < 10; i++)
	{
		*(cptr + i) = 'a' + i;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("cptr + %d 의 주소: %p\t", i, (cptr + i));
		printf("*(cptr + %d): %c \n", i, *(cptr + i));
	}

	double*dptr = (double *)malloc(sizeof(double) * 10);
	for (int i = 0; i < 10; i++)
	{
		*(dptr + i) = 3.14*i;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("dptr + %d 의 주소: %p\t", i, (dptr + i));
		printf("*(dptr + %d): %lf \n", i, *(dptr + i));
	}
	free(ptr);
	free(cptr);
	free(dptr);
	*/
	
	/*char *str1 = (char*)malloc(strlen("공유는") + 1);
	char * str2 = (char *)malloc(strlen("TVN 드라마") + 1);
	char * str3 = (char*)malloc(strlen("도깨비의 남자 주인공이다.") + 1);
	
	strcpy_s(str1, _msize(str1),"공유는");
	strcpy_s(str2, _msize(str2),"TVN 드라마");
	strcpy_s(str3, _msize(str3),"도깨비의 남자 주인공이다.");

	printf("%s %s %s\n", str1, str2, str3);
	free(str1);
	free(str2);
	free(str3);
	*/
	
	/*int *ptr = NULL;
	int size = 10;

	ptr = (int*)malloc(sizeof(int)*size);
	if (ptr != NULL)
	{
		memset(ptr, 0, sizeof(int)*size);
		for (int i = 0; i < size; i++)
		{
			printf("%d : %d \n", i + 1, *ptr++);
		}

		free(ptr);
	}
	*/

	/*
	int *ptr = NULL;
	ptr = (int*)malloc(sizeof(int)*SMALL);
	for (int i = 0; i < SMALL; i++)
	{
		ptr[i] = i + 1;
	}
	int *temp = (int*)malloc(sizeof(int)*BIG);
	memset(temp, 0, sizeof(int)*BIG);
	for (int i = 0; i < SMALL; i++)
	{
		temp[i] = ptr[i];
	}
	free(ptr);
	ptr = temp;
	for (int i = 0; i < BIG; i++)
	{
		printf("ptr[%d] = %d\n", i, *(ptr+i));
	}
	free(ptr);
	*/

	int student;
	int input;
	int *score;
	int sum = 0;
	printf("학생의 수는?:");
	scanf_s("%d", &student);
	score = (int*)malloc(student * sizeof(int));
	for (int i = 0; i < student; i ++ )
	{
		printf("학생 %d의 점수:", i);
		scanf_s("%d", &input);
		score[i] = input;
	}
	for (int i = 0; i < student; i++)
	{
		sum += score[i];
	}
	printf("전체 학생 평균 점수 : %d \n", (sum / student));
	free(score);
	return 0;
}
/*
void swap(int *a, int* b)
{
	int temp = 0;
	printf("1. 변경 전-> a : %d, b : %d\n", *a, *b);
	temp = *a;
	*a = *b;
	*b = temp;
	printf("2. 변경 후-> a : %d, b : %d\n", *a, *b);
}
*/
/*int ArrayAdd(int*pArr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += pArr[i];
	}
	return sum;
}*/
/*int ArrayMaxVal(int pArr[], int size)
{
	int max = 0;
	max = pArr[0];
	for (int i = 1; i < size; i++)
	{
		if (max < pArr[i])
		{
			max = pArr[i];
		}
	}
	return max;
}*/
/*void Swap(char**pstr1, char**pstr2)
{
	char *str;
	str = *pstr1;
	*pstr1 = *pstr2;
	*pstr2 = str;
}*/