#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

struct person 
{
	char name[20];
	char pID[20];
	struct person* frnd;

};

void swap(struct person* man1, struct person* man2)
{
	struct person tmp;

	tmp = *man1;
	*man1 = *man2;
	*man2 = tmp;
}

int main()
{
	struct person man1 = {"Mr.Lee", "820204-0000512"};
	struct person man2 = {"Mr.Lee's Friend", "82000-0000101"};

	man1.frnd = &man2;
	man2.frnd = &man1;

	swap(man1.frnd, man2.frnd);

	printf("Name : %s\n", man1.name);
	printf("pID : %s\n", man1.pID);

	printf("Name : %s\n", man2.name);
	printf("pID : %s\n", man2.pID);

	return 0;
}