#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <time.h>

void GetRandNum(int* number); //3개의 랜덤한 숫자 생성(컴퓨터)
void SelectNumber(int* userNum); //3개의 숫자 입력(유저)
int StrikeCheck(int* number, int* userNum); //Strike갯수 체크
int BallCheck(int* number, int* userNum); //Ball갯수 체크
void CheckResult(int* number, int* userNum, int* strike, int* ball); //strike와 ball의 갯수 
void GameStart(); //게임 시작 함수

int main()
{
	GameStart(); //게임 시작

	return 0;
}

void GameStart()
{
	int number[3] = {0,}; //컴퓨터가 가지고 있는 3개의 랜덤한 숫자(범위 0~9)
	int userNum[3] = {0,}; //유저가 입력하는 3개의 랜덤한 숫자
	int strikeCount = 0; //strike 갯수
	int BallCount = 0; //ball 갯수
	int gameCount = 0; //도전 횟수(3strike가 나오기 전까지 계속해서 진행)

	printf("Start Game!!\n\n");

	while(1)
	{
		gameCount++; //도전 횟수 증가

		GetRandNum(number); //3개의 랜덤한 숫자 생성(컴퓨터)
		
		SelectNumber(userNum); //3개의 랜덤한 숫자 입력(유저)

		CheckResult(number, userNum, &strikeCount, &BallCount); //strike와 ball의 갯수 체크

		printf("%d번째 도전 결과: %dstrike, %dball!!\n\n", gameCount, strikeCount, BallCount); //결과 출력

		if(strikeCount == 3) //3strike일 경우
			break; //루프 탈출
	}

	printf("Game End!\n");
}

void GetRandNum(int* number)
{
	int i = 0;
	srand((unsigned)time(NULL));

	for(i = 0; i < 3; i++)
		number[i] = rand() % 9; //0~9 범위의 랜덤한 숫자를 생성
}

void SelectNumber(int* userNum)
{
	printf("3개의 숫자 선택 : ");
	scanf("%d %d %d", &userNum[0], &userNum[1], &userNum[2]); //3개의 숫자 입력
}

void CheckResult(int* number, int* userNum, int* strike, int* ball)
{
	*strike = StrikeCheck(number, userNum); //strike갯수 가져옴
	*ball = BallCheck(number, userNum); //ball의 갯수 가져옴
}

int StrikeCheck(int* number, int* userNum)
{
	int i, count = 0;

	for(i = 0; i < 3; i++)
	{
		if(number[i] == userNum[i]) //컴퓨터 숫자와 유저숫자의 위치와 값이 일치할 경우
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
			if(number[i] == userNum[j] && i != j) //숫자가 일치하고 위치는 다를 경우
				count++;

	return count;
}


