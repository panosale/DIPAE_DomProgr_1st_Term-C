#include <stdio.h>
#include <stdlib.h>

main()
{
	/*
	MATHIMA : DOMHMENOS PROGRAMMATISMOS
	TMHMA : T1
	ERGASTHRIAKH ASKHSH : 3.4
	HMEROMHNIA : 25/10/2022
	*/
	
	// Dilosi metavliton
	int vathmos_a, vathmos_b, vathmos_c, diafora;
	double mo;
	// Eisagogi dedomenon
	printf("Dose tous vathmous a & b: ");
	scanf("%d %d", &vathmos_a, &vathmos_b);
	// Elegxos an h diafora einai arnitikos arithmos oste na ginei anapoda h afairesi
	if (vathmos_a > vathmos_b) {
		diafora = vathmos_a - vathmos_b;
	}
	else {
		diafora = vathmos_b - vathmos_a;
	}
	if (diafora > 20) { // An h diafora einai megalyteri ton 20 manadon zitaei vathmo 3ou eksetasti...
		printf("Diafora megalyteri apo 20 monades(%d). Dose ton vathmo c: ", diafora);
		scanf("%d", &vathmos_c);
		mo = (double)(vathmos_a + vathmos_b + vathmos_c) / 3; // ... kai ypologizei ton M.O. apo tis 3 vathmologies
	}
	else { // ... diaforetika ypologizei ton M.O. apo tis 2 vathmologies
		mo = (double)(vathmos_a + vathmos_b) / 2; // Ypologismos M.O. apo tis 2 vathmologies
	}
	// Emfanisi apotelesmaton
	printf("O meseo oros tis vathmologias einai: %.2f\n", mo);
	// Anamoni pliktrou gia eksodo
	system("pause"); 
}
