#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <Windows.h>
#include <math.h>

void func(int* com)
{
	srand((unsigned)time(NULL));

	*com = 1 + rand() % 3;
}

void PrintResult(int* com, int* user, char** pcom, char** puser)
{
	if(*com == *user)
		printf("����� %s ����, ��ǻ�ʹ� %s ����, �����ϴ�.\n", *puser, *pcom); 
	else if(*com < *user)
		printf("����� %s ����, ��ǻ�ʹ� %s ����, ����� �����ϴ�.\n", *puser, *pcom); 
	else if(*com > *user)
		printf("����� %s ����, ��ǻ�ʹ� %s ����, ����� �̰���ϴ�.\n", *puser, *pcom); 
}

void StoreString(int* target, char** ptr)
{
	switch(*target)
	{
		case 1:
			*ptr = "����";
			break;
		case 2:
			*ptr = "����";
			break;
		case 3:
			*ptr = "��";
			break;	
	}
}

int main()
{
	int i = 0;
	int user, com = 0;

	char* pcom = NULL;
	char* puser = NULL;

	//char** ptr = NULL;

	srand((unsigned)time(NULL));

	while(1)
	{
		printf("������ 1, ������ 2, ���� 3 ����� 0 : ");
		scanf("%d", &user);

		if(user == 0)
			break;

		func(&com);

		StoreString(&com, &pcom);

		StoreString(&user, &puser);

		PrintResult(&com, &user, &pcom, &puser);
	}

	printf("����\n");

	return 0;
}
