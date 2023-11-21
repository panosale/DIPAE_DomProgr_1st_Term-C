#include <stdio.h>
#include <stdlib.h>

main() {
    /*
    MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T1
    ERGASTHRIAKH ASKHSH : 4.7
    HMEROMHNIA : 1/11/2022
    ONOMA : PANAGIOTIS ALEVROPOULOS
    ARITHMOS MHTRWOY : 2022005
    */
    // Dilosi metavliton
    int posoEisodimatos, arithmosAkinhton, aforologitoEisodima, forologiteoEisodima;
    double forosPouAnalogei;
    // Dilosi statheron
    double posostoForou = 0.30;
	// Eisagogi dedomenon
	printf("Dose to poso eidodimatos: ");
	scanf("%d", &posoEisodimatos);
	printf("Dose ton arihmo ton akinhton: ");
	scanf("%d", &arithmosAkinhton);
	// Ypologismos dedomenon
	switch (arithmosAkinhton) {
		case 0:	aforologitoEisodima = 12000;
				break;
		case 1:	aforologitoEisodima = 10000;
				break;
		case 2:	aforologitoEisodima = 8000;
				break;
		case 3:	aforologitoEisodima = 5000;
				break;
		default: aforologitoEisodima = 0;
	}
	forologiteoEisodima = posoEisodimatos - aforologitoEisodima;
	forosPouAnalogei = (double)forologiteoEisodima * posostoForou;
	// Emfanisi apotelesmaton
	printf("Aforologiteo eidosima einai: %d\n", aforologitoEisodima);
	printf("To forologiteo eidosima einai: %d\n", forologiteoEisodima);
	printf("O foros pou analogei einai: %.2f\n", forosPouAnalogei);
    // Anamoni pliktrou apo ton xristi
    system("pause");
}
