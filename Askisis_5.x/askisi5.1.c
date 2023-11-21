#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    /*
    MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T1
    ERGASTHRIAKH ASKHSH : 5.1
    HMEROMHNIA : 8/11/2022
    ARITHMOS MHTRWOY : 2022005
    */
    // Dilosi & arxikopoiisi metavliton 
    int num = 0, i = 1;
    float power = 0;
    // Eisagogi dedomenon
    printf("Give a number between 2 and 10: ");
    scanf("%d", &num);
    // Zitaei arithmo mexri na dosei o xristis kapoion metaksi 2 & 10
    while(num < 2 || num > 10) {
        printf("Give a number between 2 and 10: ");
        scanf("%d", &num);        
    }
    // Ypologismoi kai emfanisi apotelesmaton (gia 2 <= i <= 10)
    while (power < 100) {
        power = pow (num, i);
        printf("Dynamh = %d^%d = %f\n", num, i, power);
        i++;
    }
    // Anamoni pliktrou apo ton xristi
    system("pause");
}
