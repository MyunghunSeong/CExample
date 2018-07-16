#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <string.h>

#define SIZE 5

void InputArrayElements(int (*arr)[SIZE])
{
	int i, j = 0;
	int element = 0;

	for(i = 0; i < SIZE; i++)
	{
		for(j = 0; j < SIZE; j++)
		{
			element++;
			arr[i][j] = element;
			printf("%d ", arr[i][j]); 
		}
		printf("\n");
	}

	printf("\n\n");
}

void Rotate90(int (*ptr)[SIZE], int (*ptr2)[SIZE])
{
	int i, j = 0;
	int tmp = 0;

	for(i = 0; i < SIZE; i++)
	{
		for(j = 0; j < SIZE; j++)
		{
			ptr2[j][SIZE - 1 - i] = ptr[i][j];
		}
	}
}

int main()
{
	int arr[SIZE][SIZE] = {0,};
	int arr2[SIZE][SIZE] = {0,};
	int i, j, k = 0;

	int (*ptr)[SIZE] = arr;
	int (*ptr2)[SIZE] = arr2;

	InputArrayElements(arr);

	for(k = 0; k < 5; k++)
	{
		Rotate90(ptr, ptr2);

		if(k % 2 == 0)
		{
			ptr = arr2;
			ptr2 = arr;
		}
		else
		{
			ptr = arr;
			ptr2 = arr2;
		}

		for(i = 0; i < SIZE; i++)
		{
			for(j = 0; j < SIZE; j++)
			{
				printf("%d ", ptr[i][j]);
			}

			printf("\n");
		}

		printf("\n\n");
	}

	return 0;
}