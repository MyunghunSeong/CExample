#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ADD(x, y) x+y
#define MUL(x, y) x*y

int main()
{
	int num1, num2 = 0;

	printf("���� 1�� �Է��ϼ��� : ");
	scanf("%d", &num1);

	printf("���� 2�� �Է��ϼ��� : ");
	scanf("%d", &num2);

	printf("Add = %d\n", ADD(num1, num2));
	printf("Mul = %d\n", MUL(num1, num2));

	return 0;
}