#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int size = 0;
	char* str =  NULL;

	printf("������ �Է� : ");
	scanf("%d", &size);

	str = (char*)malloc(size);

	printf("���ڿ� �Է� : ");

	scanf("%s", str);

	printf("���ڿ� ��� : %s\n", str);

	free(str);

	return 0;
}