#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i,j = 0;
	char arr[3][2][20];

	for(i = 0; i < 3; i++)
	{
		printf("�̸�, ��ȭ��ȣ ������ �Է� : ");
		scanf("%s %s", arr[i][0], arr[i][1]);
	}

	printf("\n�Է� ����� ������ �����ϴ�.\n");
	for(i = 0; i < 3; i++)
	{
		printf("�̸� : %s, ", arr[i][0]);
		printf("��ȭ��ȣ : %s\n", arr[i][1]);
	}

	return 0;
}