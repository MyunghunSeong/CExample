#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void func(char*** arr)
{
	int i, j = 0;
	char* max = NULL;
	int size = 3;

	/*for(i = 0; i < size; i++)
	{
		for(j = 0; j < size - i - 1; j++)
		{
			if(strcmp(*(**arr[j])), *(**arr[j+1])) > 0)
				strcat(max, *arr[j]);
			else
				strcat(max, *arr[j+1]);
		}
	}*/
	
	printf("%s", arr);
}

int main()
{
	int i = 0;

	//char **arr = NULL;
	//printf("%d번째 문자열 입력 : ", i+1);
	//scanf("%s", &arr);


	char **arr[3] = {NULL,};
	
	for(i = 0; i < 3; i++)
	{
		printf("%d번째 문자열 입력 : ", i+1);
		scanf("%s", &arr[i]);
	}

	//func(arr);

	return 0;
}
