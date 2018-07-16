#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int func(char* ch)
{
	int i = 0;
	int sum = 0;
	char ch2 = '\0';
	char* ptr = NULL;

	for(i = 0; i < strlen(ch); i++)
	{
		if(isalpha(ch[i]))
			continue;
		else
		{
			ch2 = ch[i];
			ptr = &ch2;
			sum += atoi(ptr);
			ptr = NULL;
		}
	} 

	return sum;
}

int main()
{
	char str[20] = {'\0',};
	int sum = 0;

	printf("문자열 입력 : ");
	gets(str);

	sum = func(str);

	printf("합 = %d\n", sum);

	return 0;
}