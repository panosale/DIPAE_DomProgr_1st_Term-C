#include <stdio.h>
#include <stdlib.h>

main()
{
	/*
	MATHIMA : DOMHMENOS PROGRAMMATISMOS
	TMHMA : T1
	ERGASTHRIAKH ASKHSH : 3.1
	HMEROMHNIA : 25/10/2022
	*/
	
	// Dilosi metavliton
	int a, b, c;
	// Eisagogi dedomenon
	printf("Give 3 numbers (a, b, c): ");
	scanf("%d %d %d", &a, &b, &c);
	// Ypologismoi
	if (a > b) {
		if (b > c) {
			printf("Descending order of numbers is: a = %d, b = %d, c = %d\n", a, b, c);
		}
		else {
        	if (a > c) {
				printf("Descending order of numbers is: a = %d, c = %d, b = %d\n", a, c, b);
			}
			else {
				printf("Descending order of numbers is: c = %d, a = %d, b = %d\n", c, a, b);
			}
		}
	}
	else {
		if (a > c) {
			printf("Descending order of numbers is: b = %d, a = %d, c = %d\n", b, a, c);
		}
		else {
			if (b > c) {
				printf("Descending order of numbers is: b = %d, c = %d, a = %d\n", b, c, a);
			}
			else {
                 printf("Descending order of numbers is: c = %d, b = %d, a = %d\n", c, b, a);
			}
		}
	}
	// Anamoni pliktrou gia eksodo
    system("pause");
}
