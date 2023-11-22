#include <stdio.h>
#include <stdlib.h>

void oppositeReverseA(int a, int *opposite, float *reverse)
{
	*opposite = a * (-1);
	*reverse = 1 / (float)(a);
}

main()
{
/*
	# Use of pointers
	int a, opp;
	float rev;
	a = 5;
	oppositeReverseA(a, &opp, &rev);
	printf("a = %d\nopposite = %d\nreverse = %f", a, opp, rev);
*/

// Use of malloc 
	int a, *opp;
	float *rev;
	opp = (int*)malloc(sizeof(int));
	rev = (float*)malloc(sizeof(float));
	printf("Give a: ");
	scanf("%d", &a);
	oppositeReverseA(a, opp, rev);
	printf("a = %d\nopposite = %d\nreverse = %f", a, *opp, *rev);
}
