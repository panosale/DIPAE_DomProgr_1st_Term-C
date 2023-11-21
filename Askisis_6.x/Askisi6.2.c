#include <stdio.h>
#include <stdlib.h>

main()
{
    /*
    MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T1
    ERGASTHRIAKH ASKHSH : 6.2
    HMEROMHNIA : 15/11/2022
    ONOMA : PANAGIOTIS ALEVROPOULOS
    ARITHMOS MHTRWOY : 2022005
    */
    // Dilosi metavliton
    int i, j;
    // Ypologismos dedomenon
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%dx%d=%d ", i, j, i * j);
        }
        printf("\n");
    }
    // Anamoni pliktrou apo ton xristi gia eksodo
    system("Pause");
}
