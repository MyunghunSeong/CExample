#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SIZE 30

void fileOpen(FILE** file, char* path)
{
	char text[30] = {'\0',};

	*file = fopen(path, "w+");

	if(file == NULL)
		printf("File Open Error!\n");

	fputs("데이터 입력 : ", stdout);
	gets(text);

	fputs(text, *file);
}

void CompareFile(FILE** file1, FILE** file2, char* standard, char* target, char** result)
{
	//file buffer
	char buf[2][SIZE];
	int i, j = 0;

	//standard file read
	*file1 = fopen(standard, "rt");
	fgets(buf[0], sizeof(buf[0]), *file1);

	//target file read
	*file2 = fopen(target, "rt");
	fgets(buf[1], sizeof(buf[1]), *file2);

	for(i = 0; i < SIZE; i++)
	{
		if(buf[0][i] != buf[1][j])
		{
			*result = "불일치";
			break;
		}
	}

	if(*result == NULL)
		*result = "일치";
}

int main()
{
	FILE* std_file;
	FILE* target_file;
	char* result = NULL;
	char path1[30] = "my1.txt";
	char path2[30] = "my2.txt";

	fileOpen(&std_file, path1);
	fileOpen(&target_file, path2);

	CompareFile(&std_file, &target_file, path1, path2, &result);

	printf("%s", result);
}