#include <stdio.h>
#include <ctype.h>

void IsBig(char ch)
{
	if(isalpha(ch))
	{
		if(islower(ch))
		{
			putchar(toupper(ch));
			printf("\n");
		}
		else
		{
			putchar(tolower(ch));
			printf("\n");
		}
	}
	else
	{
		printf("�Է��Ͻ� ���ڰ� ���ĺ��� �ƴմϴ�.\n");
		return;
	}
}

int main()
{
	char ch = '\0';

	printf("���� �Է� : ");
	ch = getchar();

	IsBig(ch);

	return 0;
}