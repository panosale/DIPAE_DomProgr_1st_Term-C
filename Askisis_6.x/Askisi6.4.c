#include <stdio.h>
#include <stdlib.h>

main()
{
    /*
    MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T1
    ERGASTHRIAKH ASKHSH : 6.4
    HMEROMHNIA : 15/11/2022
    ARITHMOS MHTRWOY : 2022005
    */
    // Dilosi & arxikpoiisi metavliton
    int n, i, npar;
    // Eisagoi dedomenon
    do {
        printf("Give an integer in [0, 10]: ");
        scanf("%d", &n);
    } while (n < 0 || n > 10);
    // Ypologismos dedomenon
    if (n <= 1)
        npar = 1;
    else {
        npar = 1;
        for (i = 2; i <= n; i++) {
            npar = npar * i;
        }
    }
    // Emfanisi apotelesmaton
    printf("%d! = %d\n",n , npar);
    // Anamoni pliktrou apo ton xristi gia eksodo
    system("Pause");
}
