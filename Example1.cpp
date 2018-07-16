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
		printf("입력하신 문자가 알파벳이 아닙니다.\n");
		return;
	}
}

int main()
{
	char ch = '\0';

	printf("문자 입력 : ");
	ch = getchar();

	IsBig(ch);

	return 0;
}