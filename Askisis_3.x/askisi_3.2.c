#include <stdio.h>
#include <stdlib.h>

main()
{
	/*
	MATHIMA : DOMHMENOS PROGRAMMATISMOS
	TMHMA : T1
	ERGASTHRIAKH ASKHSH : 3.2
	HMEROMHNIA : 25/10/2022
    ARITHMOS MHTRWOY : 2022005
	*/
	
	// Dilosi metavliton
	int a, b, c;
	// Eisagogi dedomenon
	printf("Give 3 numbers (a, b, c): ");
	scanf("%d %d %d", &a, &b, &c);
	// Ypologismoi
	if (a > b && a > c) {
		if (b > c) {
			printf("&& - Descending order of numbers is: a = %d, b = %d, c = %d\n", a, b, c);
		}
		else {
			printf("&& - Descending order of numbers is: a = %d, c = %d, b = %d\n", a, c, b);
		}
	}
	else {
		if (b > a && b > c) {
			if (a > c) {
				printf("&& - Descending order of numbers is: b = %d, a = %d, c = %d\n", b, a, c);
			}
			else {
				printf("&& - Descending order of numbers is: b = %d, c = %d, a = %d\n", b, c, a);
			}
		}	
		else {
			if (c > a && c > b) {
				if (a > b) {
					printf("&& - Descending order of numbers is: c = %d, a = %d, b = %d\n", c, a, b);
				}
				else {
					printf("&& - Descending order of numbers is: c = %d, b = %d, a = %d\n", c, b, a);
				}
			}	
		}
	}
	// Anamoni pliktrou gia eksodo
	system("pause");
}
