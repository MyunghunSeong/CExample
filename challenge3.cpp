#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Complex
{
	float real;
	float imaginary;

}complex;

void complexAdd(complex* comp);
void complexMul(complex* comp);
void complexInput(complex* comp, int size);

int main()
{
	complex comp[2];

	complexInput(comp, 2);
	complexAdd(comp);
	complexMul(comp);

	return 0;
}

void complexInput(complex* comp, int size)
{
	int i = 0;

	for(i = 0; i < size; i++)
	{
		printf("���Ҽ� �Է�%d(�Ǽ� ���) : ", i+1);
		scanf("%f %f", &(comp[i].real), &(comp[i].imaginary));
	}
}

void complexAdd(complex* comp)
{
	float real = 0.0f;
	float imaginary = 0.0f;
	int i = 0;

	for(i = 0; i < 2; i++)
	{
		real += comp[i].real;
		imaginary += comp[i].imaginary;
	}
	
	printf("���� ���] �Ǽ��� : %f, ����� : %f\n", real, imaginary);
}

void complexMul(complex* comp)
{
	float oper[3] = {1.0f, 1.0f, 0.0f};
	float real = 0.0f;
	float imaginary = 0.0f;
	int i = 0;

	for(i = 0; i < 2; i++)
	{
		oper[0] *= comp[i].real;
		oper[1] *= comp[i].imaginary;
		oper[2] += comp[i].imaginary * comp[i].real;
	}
	
	real = oper[0] - oper[1];
	imaginary = oper[2];

	printf("���� ���] �Ǽ��� : %f, ����� : %f\n", real, imaginary);
}