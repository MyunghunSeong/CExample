#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SIZE 10

struct Phone
{
	char name[20];
	char phone[20];
};

struct Phone phone[10];
static int insertIdx = 0;
bool isEnd = true;

int inner_SelectItems(int select)
{
	//1. UI출력

	printf("--------Menu---------\n");
	printf("\t\t1. Insert\n");
	printf("\t\t2. Delete\n");
	printf("\t\t3. Search\n");
	printf("\t\t4. Print All\n");
	printf("\t\t5. Exit\n");

	printf("Choose the item: ");
	scanf("%d", &select);

	return select;
}

void inner_insertFunc(char* label)
{
	printf("%s\n", label);
	printf("Input Name: ");
	scanf("%s", phone[insertIdx].name);
	printf("Input Tel Number: ");
	scanf("%s", phone[insertIdx].phone);
	printf("--------> Data Inserted\n\n");

	insertIdx++;
}

void inner_deleteFunc(char* label)
{
	int i = 0;
	int select = 0;

	printf("%s\n", label);
	printf("---------Data List---------\n");
	for(i = 0; i < insertIdx; i++)
	{
		printf("%d. Name: %s\t Tel: %s\n", i+1, phone[i].name, phone[i].phone);
	}
	printf("Choose the item: ");
	scanf("%d", &select);

	strcpy(phone[select-1].name, "");
	strcpy(phone[select-1].phone, "");

	insertIdx--;

	printf("---------Delete Result---------\n");
	for(i = 0; i < insertIdx; i++)
	{
		printf("%d. Name: %s\t Tel: %s\n", i+1, phone[i].name, phone[i].phone);
	}
}

void inner_SearchName()
{
	char text[30];
	int i = 0;

	printf("Input Searching Name: ");
	scanf("%s", text);

	for(i = 0; i < insertIdx; i++)
	{
		if(!strcmp(text, phone[i].name))
			printf("Name : %s\t / Tel: %s\n", phone[i].name, phone[i].phone);
		else
			continue;
	}
}

void inner_SearchPhone()
{
	char text[30];
	int i = 0;

	printf("Input Searching Name: ");
	scanf("%s", text);

	for(i = 0; i < insertIdx; i++)
	{
		if(!strcmp(text, phone[i].phone))
			printf("Name : %s\t / Tel: %s\n", phone[i].name, phone[i].phone);
		else
			continue;
	}
}

void inner_searchFunc(char* label)
{
	int select = 0;
	bool end = true;

	printf("%s\n", label);
	printf("---------Search Subject List---------\n");
	printf("1. Name\n");
	printf("2. Phone\n");

	while(end)
	{
		printf("Choose Search Subject: ");
		scanf("%d", &select);

		switch(select)
		{
		case 1:
			inner_SearchName();
			end = false;
			break;
		case 2:
			inner_SearchPhone();
			end = false;
			break;
		default:
			printf("Wrong Selection\n");
			break;
		}
	}
}

void inner_printAllFunc(char* label)
{
	int i = 0;

	printf("%s\n", label);

	for(i = 0; i < insertIdx; i++)
	{
		printf("Name: %s\t / Tel : %s\n", phone[i].name, phone[i].phone);
	}
}

void inner_WriteLogFile()
{
	int i = 0;

	FILE* file = NULL;

	file = fopen("LogFile.txt", "wt");

	for(i = 0; i < insertIdx; i++)
	{
		fprintf(file, "========= %d번째 Data =========\n", i+1);
		fprintf(file, "Name: %s  Tel: %s\n", phone[i].name, phone[i].phone);
	}

	fclose(file);

}

void inner_exitFunc(char* label)
{
	printf("--------> Program Exited\n\n");
	inner_WriteLogFile();
	isEnd = false;
}

void inner_BranchFunc(int select)
{
	char* label = NULL;

	switch(select)
	{
	case 1:
		label = "[INSERT]";
		inner_insertFunc(label);
		break;
	case 2:
		label = "[DELETE]";
		inner_deleteFunc(label);
		break;
	case 3:
		label = "[SEARCH]";
		inner_searchFunc(label);
		break;
	case 4:
		label = "[PRINT ALL]";
		inner_printAllFunc(label);
		break;
	case 5:
		label = "[EXIT]";
		inner_exitFunc(label);
		break;
	default:
		printf("Wrong Input Format\n");
		break;
	}
}

int main()
{
	//1. 사용자 선택 UI 출력
		//츨략 깂을 받아 분기

	while(isEnd)
	{
		int selection = 0;

		selection = inner_SelectItems(selection);

		inner_BranchFunc(selection);
	}

	return 0;
}