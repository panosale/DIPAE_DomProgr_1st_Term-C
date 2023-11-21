#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : T1
ERGASTHRIAKH ASKHSH : 6.7
HMEROMHNIA : 15/11/2022
ONOMA : PANAGIOTIS ALEVROPOULOS
ARITHMOS MHTRWOY : 2022005
*/

// ***** Dilosi-ilopoiissi synartiseon *****
// Synartisi ypologismou athrismatos peritton
void findAthroismaPeritton(int n) {
    // Dilosi & arxikpoiisi metavliton
    int i, dynami, sum = 0;
    // Ypologismos dedomenon
    for (i = 1; i <= (2 * n) - 1; i+=2) {
        sum = sum + i;
    }
    dynami = pow(n, 2);
    // Emfanisi apotelesmaton
    printf("1+3+5+...+(2*%d-1)=%d=%d^2=%d\n", n, sum, n, dynami);
}

// Synartisi ypologismou n paragontikou
int findParagontiko(int n) {
	// Dilosi & arxikpoiisi metavliton
    int i, npar = 1;
    // Ypologismos n paragontikou
    for (i = 2; i <= n; i++) {
        npar = npar * i;
    }
    // Emfanisi n paragontikou
    printf("%d! = %d\n",n , npar);
    // Epistrofi apotelesmatos
    return npar;
}

// Synartisi ypologismou proton
bool isProtos(int n) {
    // Dilosi & arxikpoiisi metavliton #2
    int i = 1;
	bool protos = true;
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
    // Epistrofi apotelesmatos
    return protos;
}

// ***** Kyrios programma *****
main()
{
	// Dilosi genikon metavliton
	int n;
    // Eisagoi gia athroisma peritton
    do {
        printf("Give an integer in [5, 20]: ");
        scanf("%d", &n);
    } while (n < 5 || n > 20);
	// Klisi synartisis ypologismou athrismatos peritton
	findAthroismaPeritton(n);
    
	// Eisagoi gia n paragontiko
    do {
        printf("Give an integer in [0, 10]: ");
        scanf("%d", &n);
    } while (n < 0 || n > 10);
    // Klisi synartisis ypologismou n paragontikou kai emfanisi apotelesmatos
	printf("%d! = %d - function call.\n", n, findParagontiko(n));
	
     // Eisagoi gia protous
    do {
        printf("Give an integer in [2, 100]: ");
        scanf("%d", &n);
    } while (n < 2 || n > 100);
	// Klisi synartisis ypologismou proton kai emfanisi apotelesmatos
    if (isProtos(n) == true)
        printf("n = %d einai protos - funtcion call.\n", n);
    else
        printf("n = %d den einai protos - funtcion call.\n", n);

   // Anamoni pliktrou apo ton xristi gia eksodo
    system("Pause");
}

