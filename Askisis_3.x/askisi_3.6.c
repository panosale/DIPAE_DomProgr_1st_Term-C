#include <stdio.h>
#include <stdlib.h>

main()
{
	/*
	MATHIMA : DOMHMENOS PROGRAMMATISMOS
	TMHMA : T1
	ERGASTHRIAKH ASKHSH : 3.6
	HMEROMHNIA : 25/10/2022
    ARITHMOS MHTRWOY : 2022005
	*/

	// Dilosi metavliton
	int varos_epistolis, proorismos;
	double eksoda_apostolis;
	// Eisagogi dedomenon
	printf("Dose to varos tis epistolis: ");
	scanf("%d", &varos_epistolis);
	printf("Einai esoterikou(0) h eksoterikou(1); ");
	scanf("%d", &proorismos);
	// Ypologismoi
	if (varos_epistolis <= 500) {
		if (proorismos == 0) {
			eksoda_apostolis = 2;
		}
		else {
			if (proorismos == 1) {
				eksoda_apostolis = 4.8;
			}
			else {
				eksoda_apostolis = -1;
			}
		}
	}
	else {
		if (varos_epistolis <= 1000 ) {
			if (proorismos == 0) {
				eksoda_apostolis = 3.5;
			}
			else {
				if (proorismos == 1) {
					eksoda_apostolis = 7.2;
				}
				else {
					eksoda_apostolis = -1;
				}
			}
		}
		else {
			if (proorismos == 0) {
				eksoda_apostolis = 4.6;
			}
			else {
				if (proorismos == 1) {
					eksoda_apostolis = 11.5;
				}
				else {
					eksoda_apostolis = -1;
				}
			}
		}
	}
	// Emfanisi apotelesmaton
	// An den edose o xristis sosto proorismo emfanizei minima lathous 
	if (eksoda_apostolis != -1) { 
	//if (proorismos == 0 || proorismos == 1) { // <- Enallaktiki ekdoxi
		printf("Ta eksoda apostolis einai: %.2f euro\n", eksoda_apostolis);
	}
	else {
		printf("Den edoses sosta ton proorismo (sostes times: 0/1).\n");
	}
	// Anamoni pliktrou gia eksodo
	system("pause");
}
