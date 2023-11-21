#include <stdio.h>
#include <stdlib.h>

main()
{
	/*
	MATHIMA : DOMHMENOS PROGRAMMATISMOS
	TMHMA : T1
	ERGASTHRIAKH ASKHSH : 3.7
	HMEROMHNIA : 25/10/2022
	ONOMA : PANAGIOTIS ALEVROPOULOS
	ARITHMOS MHTRWOY : 2022005
	*/

	// Dilosi metavliton
	int ilikia_odigou, typos_oximatos, kivismos, etisio_kostos_asfalisis;
	// Eisagogi dedomenon
	printf("Dose tin ilikia tou odigou: ");
	scanf("%d", &ilikia_odigou);
	printf("Dose ton typo tou oximatos (0 = dikiklo, 1 = aftokinito): ");
	scanf("%d", &typos_oximatos);
	printf("Dose ton kivismo tou oximatos: ");
	scanf("%d", &kivismos);
	// Ypologismos katharon asfalistron
	if (typos_oximatos == 0) { // Einai motosykleta
		if (kivismos <= 125) {
			etisio_kostos_asfalisis = 100;
		}
		else {
			etisio_kostos_asfalisis = 140;
		}
	}
	else {
		if (typos_oximatos == 1) { // Einai aftokinito
			if (kivismos <= 1400) {
				etisio_kostos_asfalisis = 400;
			}
			else {
				if (kivismos <= 1800) {
					etisio_kostos_asfalisis = 500;
				}
				else {
					etisio_kostos_asfalisis = 700;
				}
			}
		}
		else {
			etisio_kostos_asfalisis = -1; // Dothikan lathos times
		}
	}
	// Ypologismos asfalistron vasei ilikias odigou
	if (ilikia_odigou <= 24) { // Den ginetai elegxos an h ilikia tou odigou einai kato ton 18
		etisio_kostos_asfalisis = etisio_kostos_asfalisis + (etisio_kostos_asfalisis * 0.10);
	}
	// Emfanisi apotelesmaton
	// An den edose o xristis sosto typo oximatos emfanizei minima lathous 
	if (etisio_kostos_asfalisis != -1) {
		printf("To etisio kostos asfalisis tou oximatos einai: %d\n", etisio_kostos_asfalisis);
	}
	else {
		printf("Den edoses sosta ton typo tou oximatos (sostes times: 0/1).\n");
	}
	// Anamoni pliktrou gia eksodo
	system("pause");
}
