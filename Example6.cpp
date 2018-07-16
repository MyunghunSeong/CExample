#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct point
{
	int x;
	int y;
};

void PointAdd(struct point* p1, struct point* p2, struct point* p)
{
	p->x = p1->x + p2->x;
	p->y = p1->y + p2->y;
}

int main()
{
	int i = 0;
	struct point points[2];
	struct point newPoint;

	struct point* p = &newPoint;

	for(i = 0; i < 2; i++)
	{
		printf("%d¹øÂ° point xÁÂÇ¥ °ª : ", i+1);
		scanf("%d", &points[i].x);

		printf("%d¹øÂ° point yÁÂÇ¥ °ª : ", i+1);
		scanf("%d", &points[i].y);
	}

	PointAdd(&points[0], &points[1], p);

	printf("new XÁÂÇ¥ : %d\n", newPoint.x);
	printf("new YÁÂÇ¥ : %d\n", newPoint.y);

	return 0;
}
