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

	printf("도서 정보 입력\n");
	for(i = 0; i < 3; i++)
	{
		printf("저자 : ");
		//scanf("%[^\n]", mbook[i].name);
		gets(mbook[i]->name);
		printf("제목 : ");
		//scanf("%[^\n]", mbook[i].author);
		gets(mbook[i]->author);
		printf("페이지 수 : ");
		scanf("%d", &(mbook[i]->page));
		fflush(stdin);
	}

	printf("\n");
}

void printBookInfo(manage** mbook)
{
	int i = 0;

	printf("도서 출력 정보\n");
	for(i = 0; i < 3; i++)
	{
		printf("book%d\n", i+1);
		printf("저자 : %s\n", mbook[i]->name);
		printf("제목 : %s\n", mbook[i]->author);
		printf("페이지 수 : %d\n", mbook[i]->page);
	}
}
