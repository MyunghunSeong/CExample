#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

typedef struct manageBook
{
	char name[30];
	char author[30];
	int page;
} manage;

void InputBookInfo(manage* mbook);
void printBookInfo(manage* mbook);


int main()
{
	manage mbook[3];
	manage* pManage = NULL;

	pManage = mbook;

	InputBookInfo(pManage);
	printBookInfo(pManage);

	return 0;
}

void InputBookInfo(manage* mbook)
{
	int i = 0;

	printf("���� ���� �Է�\n");
	for(i = 0; i < 3; i++)
	{
		printf("���� : ");
		//scanf("%[^\n]", mbook[i].name);
		gets(mbook[i].name);
		printf("���� : ");
		//scanf("%[^\n]", mbook[i].author);
		gets(mbook[i].author);
		printf("������ �� : ");
		scanf("%d", &(mbook[i].page));
		fflush(stdin);
	}

	printf("\n");
}

void printBookInfo(manage* mbook)
{
	int i = 0;

	printf("���� ��� ����\n");
	for(i = 0; i < 3; i++)
	{
		printf("book%d\n", i+1);
		printf("���� : %s\n", mbook[i].name);
		printf("���� : %s\n", mbook[i].author);
		printf("������ �� : %d\n", mbook[i].page);
	}
}
