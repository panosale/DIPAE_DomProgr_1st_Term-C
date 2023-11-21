#include <stdio.h>
#include <stdlib.h>

main()
{
    /*
    MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T1
    ERGASTHRIAKH ASKHSH : 5.5
    HMEROMHNIA : 8/11/2022
    ARITHMOS MHTRWOY : 2022005
    */
    // Dilosi & arxikopoiisi metavliton 
    int a, b, p = 0;
    // Eisagogi dedomenon
	printf("Give two numbers a and b: ");
	scanf("%d %d", &a, &b);
	// Ypologismoi kai emfanisi apotelesmaton
	printf("a * b = %d\n", a * b);
	while (b > 0) {
		if (b % 2 != 0)
			p = p + a;
		printf("a = %d, b = %d, p = %d\n", a, b, p);
		a = a * 2;
		b = b / 2;
	} 
	printf("p = %d\n", p);
    // Anamoni pliktrou apo ton xristi
    system("pause");
}
