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
		printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다.\n", *puser, *pcom); 
	else if(*com < *user)
		printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 졌습니다.\n", *puser, *pcom); 
	else if(*com > *user)
		printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 이겼습니다.\n", *puser, *pcom); 
}

void StoreString(int* target, char** ptr)
{
	switch(*target)
	{
		case 1:
			*ptr = "바위";
			break;
		case 2:
			*ptr = "가위";
			break;
		case 3:
			*ptr = "보";
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
		printf("바위는 1, 가위는 2, 보는 3 종료는 0 : ");
		scanf("%d", &user);

		if(user == 0)
			break;

		func(&com);

		StoreString(&com, &pcom);

		StoreString(&user, &puser);

		PrintResult(&com, &user, &pcom, &puser);
	}

	printf("종료\n");

	return 0;
}
