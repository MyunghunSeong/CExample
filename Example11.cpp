#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define PI 3.14
#define AREA(x) x*x*PI

int main()
{
	int radius = 0;

	printf("�������� �Է��ϼ��� : ");
	scanf("%d", &radius);

	printf("���� ���� = %.2f", AREA(radius));

	return 0;
}