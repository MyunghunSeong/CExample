#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define PI 3.14
#define AREA(x) x*x*PI

int main()
{
	int radius = 0;

	printf("반지름을 입력하세요 : ");
	scanf("%d", &radius);

	printf("원의 넓이 = %.2f", AREA(radius));

	return 0;
}