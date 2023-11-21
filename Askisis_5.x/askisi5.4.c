#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    /*
    MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T1
    ERGASTHRIAKH ASKHSH : 5.4
    HMEROMHNIA : 8/11/2022
    ONOMA : PANAGIOTIS ALEVROPOULOS
    ARITHMOS MHTRWOY : 2022005
    */
    // Dilosi & arxikopoiisi metavliton 
    int a = 0, arnitikoi = 0, thetikoi = 0, metaksi100kai200 = 0;
    // Eisagogi dedomenon & Ypologismoi kai emfanisi apotelesmaton
    do {
	    printf("Give a number NOT between 15 and 25: ");
	    scanf("%d", &a);
	    if (a < 15 || a > 25) {
	        if (a < 0)
	        	arnitikoi++;
	        else
	        	thetikoi++;
	    	if (a >= 100 && a <= 200)
	    		metaksi100kai200++;
			if ( a % 2 == 0)
	            printf("O arithmos einai artios: %d^2 = %.0f\n", a, pow(a, 2));
	            // printf("O arithmos einai artios: %d^2 = %.0f\n", a * a); // Enallaktiki xoris tin pow()
		}
    } while(a < 15 || a > 25);
    // Emfanisi apotelesmaton
    printf("Arnitikoi arithmoi: %d\n", arnitikoi);
    printf("Thetikoi arithmoi: %d\n", thetikoi);
    printf("Arithmoi metaksi 100 & 200: %d\n", metaksi100kai200);
    // Anamoni pliktrou apo ton xristi
    system("pause");
}
