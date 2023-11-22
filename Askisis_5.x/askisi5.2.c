#include <stdio.h>
#include <stdlib.h>

main()
{
    /*
    MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T1
    ERGASTHRIAKH ASKHSH : 5.2
    HMEROMHNIA : 8/11/2022
    ARITHMOS MHTRWOY : 2022005
    */
    // Dilosi & arxikopoiisi metavliton
    int num = 0, i = 1;
    float power = 1;
    // Eisagogi dedomenon
    // Zitaei arithmo mexri na dosei o xristis kapoion metaksi 2 & 10
	do {
		printf("Give a number between 2 and 10: ");
        scanf("%d", &num);        
    } while(num < 2 || num > 10);
    // Ypologismoi kai emfanisi apotelesmaton (gia 2 <= i <= 10)
    do {
        // Ypologismos power xoris ti xrisi tis pow()
        power = power * num;
        // Emfanisi apotelesmaton
        printf("Dynamh = %d^%d = %f\n", num, i, power);
        i++;
    } while (power < 100);
    // Anamoni pliktrou apo ton xristi
    system("pause");
}
