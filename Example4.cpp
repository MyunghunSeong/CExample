#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Employee
{
	char name[20];
	char* unique[20];
	int money;
}emp;

void InputInfo(emp** e, int size)
{
	int i = 0;

	for(i = 0; i < size; i++)
	{
		printf("%d��° ���� �Է�\n", i+1);

		printf("�̸��� �Է��ϼ��� : ");
		scanf("%s", (*e[i]).name);

		printf("�ֹε�Ϲ�ȣ�� �Է��ϼ��� : ");
		scanf("%s", (*e[i]).unique);

		printf("������ �Է��ϼ��� : ");
		scanf("%d", &((*e[i]).money));

		printf("\n");
	}
}

void printInfo(emp** e, int size)
{
	int i = 0;
	
	for(i = 0; i < size; i++)
	{
		printf("=== %s�� ���� ===\n", e[i]->name);
		printf("�̸� : %s\n", e[i]->name);
		printf("�ֹι�ȣ : %s\n", e[i]->unique);
		printf("���� : %d\n", e[i]->money);
		printf("\n");
	}

}

int main()
{
	emp e[3];
	int size = sizeof(e)/sizeof(emp);
	int i = 0;

	emp* pEmp[3] = {NULL,};

	for(i = 0; i < size; i++)
	{
		pEmp[i] = &e[i];
		pEmp[i] = &e[i];
	}

	InputInfo(pEmp, size);

	printInfo(pEmp, size);

	return 0;
}