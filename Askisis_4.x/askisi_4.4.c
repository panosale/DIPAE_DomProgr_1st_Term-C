#include <stdio.h>
#include <stdlib.h>

main() {
    /*
    MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T1
    ERGASTHRIAKH ASKHSH : 4.4
    HMEROMHNIA : 1/11/2022
    ONOMA : PANAGIOTIS ALEVROPOULOS
    ARITHMOS MHTRWOY : 2022005
    */

	// Dilosi metavliton
    int month;
	// Eisagogi dedomenon
    printf("Dose ton mina: ");
    scanf("%d",&month);
	// Ypologismoi & Emfanisi apotelesmaton
    switch (month) {
        case 3 :  
        case 4 :  
        case 5 :    printf("H epoxi einai Anoiksi.\n");
                    break;
        case 6 :  
        case 7 :  
        case 8 :    printf("H epoxi einai Kalokairi.\n");
                    break;
        case 9 :  
        case 10 :  
        case 11 :   printf("H epoxi einai Fthinoporo\n");
                    break;
        case 12 :  
        case 1 :  
        case 2 :    printf("H epoxi einai Xeimonas.\n");
                    break;
        default :   printf("Edoses lathos epoxi.\n");
    }
	// Anamoni pliktrou gia eksodo   
    system("Pause");
}
