#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

main()
{
    /*
    MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T1
    ERGASTHRIAKH ASKHSH : 6.6
    HMEROMHNIA : 15/11/2022
    ARITHMOS MHTRWOY : 2022005
    */
    // Dilosi & arxikpoiisi metavliton #1
    int n, i, npar = 1;
    // Ypologismos n!
    // Eisagoi gia n paragontiko
    do {
        printf("Give an integer in [0, 10]: ");
        scanf("%d", &n);
    } while (n < 0 || n > 10);
    // Ypologismos n paragontikou
    for (i = 2; i <= n; i++) {
        npar = npar * i;
    }
    // Emfanisi n paragontikou
    printf("%d! = %d\n",n , npar);
    // Ypologismos proton
    // Dilosi & arxikpoiisi metavliton #2
    bool protos = true;
    // Eisagoi gia protous
    do {
        printf("Give an integer in [2, 100]: ");
        scanf("%d", &n);
    } while (n < 2 || n > 100);
    // Ypologismos proton
    for (i = 2; i <= n / 2; i++) {
		if (n % i == 0)
            protos = false;        	
    }
    // Emfanisi apotelesmaton gia protous
    if (protos == true)
        printf("n = %d einai protos.\n", n);
    else
        printf("n = %d den einai protos.\n", n);    
    // Anamoni pliktrou apo ton xristi gia eksodo
    system("Pause");
}
