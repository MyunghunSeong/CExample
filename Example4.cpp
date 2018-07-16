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
		printf("%d번째 정보 입력\n", i+1);

		printf("이름을 입력하세요 : ");
		scanf("%s", (*e[i]).name);

		printf("주민등록번호를 입력하세요 : ");
		scanf("%s", (*e[i]).unique);

		printf("연봉을 입력하세요 : ");
		scanf("%d", &((*e[i]).money));

		printf("\n");
	}
}

void printInfo(emp** e, int size)
{
	int i = 0;
	
	for(i = 0; i < size; i++)
	{
		printf("=== %s의 정보 ===\n", e[i]->name);
		printf("이름 : %s\n", e[i]->name);
		printf("주민번호 : %s\n", e[i]->unique);
		printf("연봉 : %d\n", e[i]->money);
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