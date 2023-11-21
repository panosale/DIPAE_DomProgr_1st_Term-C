#include <stdio.h>
#include <stdlib.h>

main()
{
    /*
    MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T1
    ERGASTHRIAKH ASKHSH : 6.1
    HMEROMHNIA : 15/11/2022
    ARITHMOS MHTRWOY : 2022005
    */
    // Dilosi metavliton
    int i, j;
    // Eisagoi dedomenon
    do {
        printf("Give an integer in [1, 10]: ");
        scanf("%d", &i);    
    } while (i < 1 || i > 10);
    // Ypologismos dedomenon
    for (j = 1; j <= 10; j++) {
        printf("%dx%d=%d ", i, j, i * j);
    }
    printf("\n");
    // Anamoni pliktrou apo ton xristi gia eksodo
    system("Pause");
}
