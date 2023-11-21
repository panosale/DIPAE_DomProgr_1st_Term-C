#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    /*
    MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T1
    ERGASTHRIAKH ASKHSH : 6.3
    HMEROMHNIA : 15/11/2022
    ONOMA : PANAGIOTIS ALEVROPOULOS
    ARITHMOS MHTRWOY : 2022005
    */
    // Dilosi & arxikpoiisi metavliton
    int n, i, dynami, sum = 0;
    // Eisagoi dedomenon
    do {
        printf("Give an integer in [5, 20]: ");
        scanf("%d", &n);
    } while (n < 5 || n > 20);
    // Ypologismos dedomenon
    for (i = 1; i <= (2 * n) - 1; i+=2) {
        sum = sum + i;
    }
    dynami = pow(n, 2);
    // Emfanisi apotelesmaton
    printf("1+3+5+...+(2*%d-1)=%d=%d^2=%d\n", n, sum, n, dynami);
    // Anamoni pliktrou apo ton xristi gia eksodo
    system("Pause");
}
