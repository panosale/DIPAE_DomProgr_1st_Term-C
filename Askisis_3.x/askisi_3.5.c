#include <stdio.h>
#include <stdlib.h>

main()
{
	/*
	MATHIMA : DOMHMENOS PROGRAMMATISMOS
	TMHMA : T1
	ERGASTHRIAKH ASKHSH : 3.5
	HMEROMHNIA : 25/10/2022
	*/

	// Dilosi metavliton
	int misthos, kratisi_unicef, kratisi_sos, telikos_misthos;
	// Eisagogi dedomenon
	printf("Dose ton mistho tou ypallilou: ");
	scanf("%d", &misthos);
	// Ypologismoi
	if (misthos <= 800) {
		kratisi_unicef = misthos * 0.04;
		kratisi_sos = misthos * 0.05;
	}
	else {
		if (misthos <= 1200 ) {
			kratisi_unicef = misthos * 0.06;
			kratisi_sos = misthos * 0.075;
		}
		else {
			if (misthos <= 2000) {
				kratisi_unicef = misthos * 0.08;
				kratisi_sos = misthos * 0.095;
			}
			else {
				kratisi_unicef = misthos * 0.11;
				kratisi_sos = misthos * 0.12;
			}
		}
	}
	telikos_misthos = misthos - kratisi_unicef - kratisi_sos;
	// Emfanisi apotelesmaton
	printf("Eisfora gia UNICEF: %d\nEisfora gia SOS: %d\nTelikos misthos: %d\n", kratisi_unicef, kratisi_sos, telikos_misthos);
	// Anamoni pliktrou gia eksodo
	system("pause");
}
