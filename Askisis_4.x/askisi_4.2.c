#include <stdio.h>
#include <stdlib.h>

main() {
    /*
    MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T1
    ERGASTHRIAKH ASKHSH : 4.2
    HMEROMHNIA : 1/11/2022
    ONOMA : PANAGIOTIS ALEVROPOULOS
    ARITHMOS MHTRWOY : 2022005
    */

    int x;
    printf("Dose enan akeraio MH ARNHTIKO arithmo gia to x : ");
    scanf("%d",&x);
    
    switch (x) {
        case 0 :    printf("x=0\n");
                    break;
        case 1 :    
        case 3 :    
        case 5 :    printf("x= perittos\n");
                    break;
        case 2 :    
        case 4 :    printf("x= artios\n");
                    break;
        default :   printf("x>5\n");
    }
	/* Enallaktiki
    switch (x) {
        case 0 :    printf("x=0\n");
                    break;
        case 1 :    printf("x= perittos\n");
                    break;
        case 2 :    printf("x= artios\n");
                    break;
        case 3 :    printf("x= perittos\n");
                    break;
        case 4 :    printf("x= artios\n");
                    break;
        case 5 :    printf("x= perittos\n");
                    break;
        default :   printf("x>5\n");
    }
	*/
    system("Pause");
}
