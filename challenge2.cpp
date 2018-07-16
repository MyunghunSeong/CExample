#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct manageBook
{
	char name[30];
	char author[30];
	int page;
} manage;

void InputBookInfo(manage** mbook);
void printBookInfo(manage** mbook);

int main()
{
	int i = 0;
	manage books[3];
	manage *pBook[3] = {NULL,};

	for(i = 0; i < 3; i++)
		pBook[i] = &books[i];

	InputBookInfo(pBook);
	printBookInfo(pBook);


	return 0;
}

void InputBookInfo(manage** mbook)
{
	int i = 0;

	printf("���� ���� �Է�\n");
	for(i = 0; i < 3; i++)
	{
		printf("���� : ");
		//scanf("%[^\n]", mbook[i].name);
		gets(mbook[i]->name);
		printf("���� : ");
		//scanf("%[^\n]", mbook[i].author);
		gets(mbook[i]->author);
		printf("������ �� : ");
		scanf("%d", &(mbook[i]->page));
		fflush(stdin);
	}

	printf("\n");
}

void printBookInfo(manage** mbook)
{
	int i = 0;

	printf("���� ��� ����\n");
	for(i = 0; i < 3; i++)
	{
		printf("book%d\n", i+1);
		printf("���� : %s\n", mbook[i]->name);
		printf("���� : %s\n", mbook[i]->author);
		printf("������ �� : %d\n", mbook[i]->page);
	}
}
