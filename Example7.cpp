#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i,j = 0;
	char arr[3][2][20];

	for(i = 0; i < 3; i++)
	{
		printf("이름, 전화번호 순으로 입력 : ");
		scanf("%s %s", arr[i][0], arr[i][1]);
	}

	printf("\n입력 결과는 다음과 같습니다.\n");
	for(i = 0; i < 3; i++)
	{
		printf("이름 : %s, ", arr[i][0]);
		printf("전화번호 : %s\n", arr[i][1]);
	}

	return 0;
}