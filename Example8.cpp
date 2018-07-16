#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int size = 0;
	char* str =  NULL;

	printf("사이즈 입력 : ");
	scanf("%d", &size);

	str = (char*)malloc(size);

	printf("문자열 입력 : ");

	scanf("%s", str);

	printf("문자열 출력 : %s\n", str);

	free(str);

	return 0;
}