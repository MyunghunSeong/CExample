#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <time.h>

void GetRandNum(int* number); //3���� ������ ���� ����(��ǻ��)
void SelectNumber(int* userNum); //3���� ���� �Է�(����)
int StrikeCheck(int* number, int* userNum); //Strike���� üũ
int BallCheck(int* number, int* userNum); //Ball���� üũ
void CheckResult(int* number, int* userNum, int* strike, int* ball); //strike�� ball�� ���� 
void GameStart(); //���� ���� �Լ�

int main()
{
	GameStart(); //���� ����

	return 0;
}

void GameStart()
{
	int number[3] = {0,}; //��ǻ�Ͱ� ������ �ִ� 3���� ������ ����(���� 0~9)
	int userNum[3] = {0,}; //������ �Է��ϴ� 3���� ������ ����
	int strikeCount = 0; //strike ����
	int BallCount = 0; //ball ����
	int gameCount = 0; //���� Ƚ��(3strike�� ������ ������ ����ؼ� ����)

	printf("Start Game!!\n\n");

	while(1)
	{
		gameCount++; //���� Ƚ�� ����

		GetRandNum(number); //3���� ������ ���� ����(��ǻ��)
		
		SelectNumber(userNum); //3���� ������ ���� �Է�(����)

		CheckResult(number, userNum, &strikeCount, &BallCount); //strike�� ball�� ���� üũ

		printf("%d��° ���� ���: %dstrike, %dball!!\n\n", gameCount, strikeCount, BallCount); //��� ���

		if(strikeCount == 3) //3strike�� ���
			break; //���� Ż��
	}

	printf("Game End!\n");
}

void GetRandNum(int* number)
{
	int i = 0;
	srand((unsigned)time(NULL));

	for(i = 0; i < 3; i++)
		number[i] = rand() % 9; //0~9 ������ ������ ���ڸ� ����
}

void SelectNumber(int* userNum)
{
	printf("3���� ���� ���� : ");
	scanf("%d %d %d", &userNum[0], &userNum[1], &userNum[2]); //3���� ���� �Է�
}

void CheckResult(int* number, int* userNum, int* strike, int* ball)
{
	*strike = StrikeCheck(number, userNum); //strike���� ������
	*ball = BallCheck(number, userNum); //ball�� ���� ������
}

int StrikeCheck(int* number, int* userNum)
{
	int i, count = 0;

	for(i = 0; i < 3; i++)
	{
		if(number[i] == userNum[i]) //��ǻ�� ���ڿ� ���������� ��ġ�� ���� ��ġ�� ���
			count++;
		else
			continue;
	}

	return count;
}

int BallCheck(int* number, int* userNum)
{
	int i, j, count = 0;

	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			if(number[i] == userNum[j] && i != j) //���ڰ� ��ġ�ϰ� ��ġ�� �ٸ� ���
				count++;

	return count;
}


