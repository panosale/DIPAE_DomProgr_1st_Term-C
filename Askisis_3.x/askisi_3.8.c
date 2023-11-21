#include <stdio.h>
#include <stdlib.h>

main()
{
	/*
	MATHIMA : DOMHMENOS PROGRAMMATISMOS
	TMHMA : T1
	ERGASTHRIAKH ASKHSH : 3.8
	HMEROMHNIA : 25/10/2022
	ONOMA : PANAGIOTIS ALEVROPOULOS
	ARITHMOS MHTRWOY : 2022005
	*/

	// Dilosi metavliton
	int kilovatores, tmp_kilovatores, kostos_katanalosis;
	double pliroteo_poso;
	// Dilosi statheron
	int pagio = 15;
	int klimaka1 = 200;
	double xreosi_klimakas1 = 0.20;
	int klimaka2 = 1000;
	double xreosi_klimakas2 = 0.35;
	double xreosi_klimakas3 = 0.50;
	// Eisagogi dedomenon
	printf("Dose tis kilovatores: ");
	scanf("%d", &kilovatores);
	// Ypologismoi
	if (kilovatores <= klimaka1) { // Katanalosi mikroteri h isi ton 200kwh
		pliroteo_poso = kilovatores * xreosi_klimakas1;
	}
	else {
		if (kilovatores <= klimaka2) { // Katanalosi mikroteri h isi ton 1000kwh
			tmp_kilovatores = kilovatores - klimaka1;
			pliroteo_poso = (klimaka1 * xreosi_klimakas1) + (tmp_kilovatores * xreosi_klimakas2);
		}
		else { // Katanalosi megaliteri ton 1000kwh
			pliroteo_poso = (klimaka1 * xreosi_klimakas1) + ((klimaka2 - klimaka1) * xreosi_klimakas2);
			tmp_kilovatores = kilovatores - klimaka2;
			pliroteo_poso = pliroteo_poso + (tmp_kilovatores * xreosi_klimakas3);
		}
	}
	pliroteo_poso = pliroteo_poso + pagio;
	// Emfanisi apotelesmaton
	printf("To pliroteo poso einai: %.2f euro\n", pliroteo_poso);
	// Anamoni pliktrou gia eksodo
	system("pause");
}
