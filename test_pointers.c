#include <stdio.h>
//#include <stdlib.h>

main()
{
	char ch = '$';
	short s = 1;
	int i = 5;
	float f = 1.5;
	double d = 2.5;

	char *pch;
	short *ps;
	int *pi;
	float *pf;
	double *pd;

	pch = &ch;
	ps = &s;
	pi = &i;
	pf = &f;
	pd = &d;
	printf("Initial values:\n");
	printf("ch = %c\t\t s = %hd\t\t i = %d\t\t f = %f\t d = %lf\n", ch, s, i, f, d);
	printf("*pch = %c\t *ps = %hd\t *pi = %d\t *pf = %f\t *pd = %lf\n", *pch, *ps, *pi, *pf, *pd);
	printf("pch = %d\t ps = %d\t pi = %d\t pf = %d\t pd = %d\n", pch, ps, pi, pf, pd);
	printf("\n");
	
	pch+=1;
	ps+=1;
	pi+=1;
	pf+=1;
	pd+=1;
	printf("Add 1 to pointers:\n");
	printf("*pch = %c\t *ps = %hd\t *pi = %d\t *pf = %f\t *pd = %lf\n", *pch, *ps, *pi, *pf, *pd);
	printf("pch = %d\t ps = %d\t pi = %d\t\t pf = %d\t pd = %d\n", pch, ps, pi, pf, pd);
	printf("\n");
	
	pch = &ch;
	ps = &s;
	pi = &i;
	pf = &f;
	pd = &d;
	printf("Return to initial values:\n");
	printf("*pch = %c\t *ps = %hd\t *pi = %d\t *pf = %f\t *pd = %lf\n", *pch, *ps, *pi, *pf, *pd);
	printf("pch = %d\t ps = %d\t pi = %d\t pf = %d\t pd = %d\n", pch, ps, pi, pf, pd);
	printf("\n");
	
	int *tPtr, t = 5;
	tPtr = &t;
	printf("%d\n", *tPtr);
	printf("t = %d\n", t);
	printf("&t in DEC = %d\n", &t);
	printf("&t in HEX = %p\n", &t);
}

