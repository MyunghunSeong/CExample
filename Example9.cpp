#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void copyArray(int* pArr, int* arr, int size)
{
	int i = 0;

	for(i = 0; i < size; i++)
		*(pArr + i) = arr[i];
}

void printArray(int* pArr, int start, int size)
{
	int i = 0;

	for(i = start; i < size; i++)
		printf("Number[%d] : %d\n", i+1, pArr[i]);
}

void InputArray(int* pArr, int pre, int size)
{
	int i = 0;

	for(i = pre; i < size; i++)
	{
		printf("정수 입력 : ");
		scanf("%d", &pArr[i]);
	}
}

int main()
{
	int num, i = 0;
	int count = 0;
	int arr[5] = {0,};
	int* pArr = NULL;
	int size = sizeof(arr) / sizeof(int);

	for(i = 0; i < size; i++)
	{
		printf("정수 입력 : ");
		scanf("%d", &num);

		arr[i] = num;

		count++;
	}

	pArr = (int*)malloc(count);
	copyArray(pArr, arr, count);
	printArray(pArr, 0, count);

	while(num != -1)
	{
		int now = 0;

		now = count + now;

		if(count >= now)
		{
			free(pArr);
			count = now + 3;
			pArr = (int*)malloc(count);
		}

		InputArray(pArr, size, count);
		printArray(pArr, size, count);
		
	}

	return 0;
}