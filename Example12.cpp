#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(x, y) (x > y) ? x : y

int main()
{
	int num1, num2 = 0;

	printf("������ �Է��ϼ��� : ");
	scanf("%d %d", &num1, &num2);

	printf("Max = %d\n", MAX(num1, num2));

	return 0;
}