#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int file_open(FILE** file, char* path);
void inputData(FILE** file, char* buf);
int DistinguishAlpha(FILE** file, char* path, char* buf);
void PrintResult(int aCount, int bCount);

int main(int argc, char* argv[])
{
	char text[30];
	FILE* file = NULL;
	//char* path = "test.txt";
	int return_value = 0;

	while(1)
	{
		if(argc < 2)
		{
			printf("Error!!\n");
			printf("다시 입력해주세요!\n");
		}
		else
			break;
	}

	return_value = file_open(&file, argv[1]);

	if(return_value == 1)
		fputs("file open error!!", stdout);

	inputData(&file, text);

	DistinguishAlpha(&file, argv[1], text);

	return 0;
}

int file_open(FILE** file, char* path)
{
	*file = fopen(path, "w+");

	if(file == NULL)
		return 1;
	else
		return 0;
}

void inputData(FILE** file, char* buf)
{
	fputs("데이터 입력 : ", stdout);
	gets(buf);

	fputs(buf, *file);
}

int DistinguishAlpha(FILE** file, char* path, char* buf)
{
	int i = 0;
	int aCount = 0;
	int bCount = 0;

	*file = fopen(path, "rt");

	if(file == NULL)
		return 1;

	fgets(buf, sizeof(buf), *file);

	for(i = 0; i < strlen(buf); i++)
	{
		if(buf[i] == 'a' || buf[i] == 'A')
			aCount++;

		if(buf[i] == 'b' || buf[i] == 'B')
			bCount++;
	}

	PrintResult(aCount, bCount);
}

void PrintResult(int aCount, int bCount)
{
	printf("A(a) 시작 단어 수 : %d\n", aCount);
	printf("B(b) 시작 단어 수 : %d\n", bCount);
}